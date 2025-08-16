import os
import subprocess
import sys
import re
import pandas as pd
import xml.etree.ElementTree as ET

aceroot = os.getenv("ACEROOT", "${ACEROOT}")


config_output = "invariant_config.xml"

def main(xml_file,trace_file):     
    try:
        if not os.path.isfile(xml_file):
            print(f"Error: The file '{xml_file}' does not exist.")
            sys.exit(1)
        try:
            tree = ET.parse(xml_file)
            root = tree.getroot()
        except ET.ParseError as parse_error:
            print(f"Error: Failed to parse the XML file '{xml_file}'. Details: {parse_error}")
            sys.exit(1)
        print("Templates loaded:")
        for child in root:
            print(child.tag, child.attrib)

        # Verify required elements exist
        tpls_element = root.find("tpls")
        vars_element = root.find("vars")
        if tpls_element is None or vars_element is None:
            print(f"Error: The XML file '{xml_file}' is missing required elements 'tpls' or 'vars'.")
            sys.exit(1)
    except ET.ParseError:
        print(f"Error: Failed to parse the XML file '{xml_file}'. Please check its structure.")
        sys.exit(1)
    except Exception as e:
        print(f"An unexpected error occurred while processing the XML file: {e}")
        sys.exit(1)
    
    # Extract templates and variables from the input XML
    #templates = [temp.attrib.get("name") for temp in root.find("tpls") if temp.attrib.get("name") and not temp.attrib.get("len")]
    #special_templates = [temp.attrib.get("name") for temp in root.find("tpls") if temp.attrib.get("name") and temp.attrib.get("len")]
    variables = [var.attrib.get("name") for var in root.find("vars") if var.attrib.get("name")]

    #WE ASSUME TEMPLATES WITH AT MOST 2 VARIABLES FOR NOW
    # Create combinations of templates and variables
    fully_instantiated_templates = []
    # Load the trace file for special tempaltes handling
    try:
        trace_df = pd.read_csv(trace_file)
        print("Trace file loaded successfully.")
    except Exception as e:
        print(f"Error: Failed to load the trace file '{trace_file}'. Details: {e}")
        sys.exit(1)

    # Remove types from the CSV headers
    type_patterns = [
        r'\bbool\b', r'\bchar\b', r'\bshort\b', r'\bint\b', r'\blong int\b', r'\bunsigned char\b',
        r'\bunsigned short\b', r'\bunsigned int\b', r'\bunsigned long int\b', r'\bsize_t\b',
        r'\bint64_t\b', r'\bint32_t\b', r'\buint64_t\b', r'\buint32_t\b', r'\bfloat\b', r'\bdouble\b',
        r'\bshortint\b', r'\blongint\b', r'\bbyte\b', r'\bbit\b', r'\bshortint unsigned\b',
        r'\bint unsigned\b', r'\blongint unsigned\b', r'\bbyte unsigned\b', r'\bbit signed\b',
        r'\breg\b', r'\blogic\b', r'\binteger\b', r'\bwire\b', r'\btime\b', r'\breg signed\b',
        r'\blogic signed\b', r'\binteger unsigned\b', r'\bwire signed\b', r'\btime signed\b',
        r'\bshortreal\b', r'\breal\b', r'\brealtime\b'
    ]
    #regex that matches any of the patterns 
    type_pattern = r'\b(?:' + '|'.join(type_patterns) + r')\b'
    # Remove types from the column names
    trace_df.columns = [re.sub(type_pattern, '', col).strip() for col in trace_df.columns]

    for temp in root.find("tpls"):
        if temp.attrib.get("name") is None:
            print(f"Warning: Template element without 'name' attribute found. Skipping.")
            continue
        template = temp.attrib.get("name")
        if temp.attrib.get("len") is not None:
            # Special template handling
            temp_len = temp.attrib.get("len")

        # Count matches for placeholders like P0, P1, P2, etc.
        matched_placeholders = re.findall(r'\bP\d+\b', template)
        placeholder_count = len(matched_placeholders)

        match placeholder_count:
            #In case of no placeholders we manage also the special templates
            case 0:
                # No placeholders, check if it is a special template
                if re.match(r'\.\.\#\#\d+\.\.', template):
                    #Create all the combinations of variables of lenght temp_len
                    temp_len = int(temp_len)
                    if temp_len < 1:
                        print(f"Warning: Invalid length '{temp_len}' for template '{template}'. Skipping.")
                        continue
                    # Generate all combinations of variables of length temp_len
                    from itertools import permutations
                    if len(variables) < temp_len:
                        print(f"Warning: Not enough variables to generate combinations of length {temp_len}. Skipping.")
                        continue
                    for vars_combination in permutations(variables, temp_len):
                        separator = template.replace('.','')
                        template_instance = ""
                        for var in vars_combination:
                            template_instance += var + " " + separator + " "
                            
                        # Remove the last redundant separator
                        template_instance = template_instance.rstrip(separator + " ")
                        fully_instantiated_templates.append(template_instance)

                else:   
                    # No placeholders, just add the template
                    print(f"Warning: Template '{template}' has no placeholders. Skipping.")
            case 1:
                # One placeholder, add it to the template
                for var in variables:
                    if '!' in var:
                        print(f"Variable '{var}' is a negated(!) signal. Skipping numeric template instantiation.")
                        continue
                    template_instance = template.replace(matched_placeholders[0], ' ' + var + ' ')

                    if("LOWERB" in template_instance or "UPPERB" in template_instance):
                        # Extract the lower and upper bounds from the trace file
                        if "LOWERB" in template_instance:
                            lower_bound = trace_df[str(var)].min() if str(var) in trace_df.columns else None
                            if lower_bound is not None:
                                template_instance = template_instance.replace("LOWERB",' ' + str(lower_bound))
                            else:
                                print(f"Warning: 'LOWERB' not found in trace file. Skipping.")
                                continue
                        elif "UPPERB" in template_instance:
                            upper_bound = trace_df[str(var)].max() if str(var) in trace_df.columns else None
                            if upper_bound is not None:
                                template_instance = template_instance.replace("UPPERB", ' ' + str(upper_bound))
                            else:
                                print(f"Warning: 'UPPERB' not found in trace file. Skipping.")
                                continue
                        else:
                            print(f"Error: Neither 'LOWERB' nor 'UPPERB' found in template '{template_instance}'. Something went terribly wrong!")
                            sys.exit(1)

                        continue
                    fully_instantiated_templates.append(template_instance)

            case 2:
                if(len(variables) < 2):
                    print(f"Warning: Available variables is only one but expects two. Skipping.")
                    continue
                # Two placeholders, add them to the template
                for var1 in variables:
                    for var2 in variables:
                        if var1 != var2 and '!' not in var1 and '!' not in var2:
                            template_instance = template.replace(matched_placeholders[0], var1 + ' ').replace(matched_placeholders[1], ' ' + var2)
                            fully_instantiated_templates.append(template_instance)

            case 3:
                if(len(variables) < 3):
                    print(f"Warning: Available variables is only {len(variables)} but expects three. Skipping.")
                    continue
                # Three placeholders, instantiate them
                for var1 in variables:
                    for var2 in variables:
                        for var3 in variables:
                            if var1 != var2 and var1 != var3 and var2 != var3 and '!' not in var1 and '!' not in var2 and '!' not in var3:
                                template_instance = template.replace(matched_placeholders[0], var1 + ' ').replace(matched_placeholders[1], ' ' + var2).replace(matched_placeholders[2], ' ' + var3)
                                fully_instantiated_templates.append(template_instance)

            case _:
                print(f"Warning: Template '{template}' has more than 2 placeholders. Not supported atm.")
            
    # Remove duplicates from the fully instantiated templates
    fully_instantiated_templates = list(set(fully_instantiated_templates))
    
    #Here I should have all the templates that needs to be checked by harm 
    harm_config_template_header = "<harm>\n 	<context name=\"default\">\n"
    harm_config_template_tail = "</context>\n</harm>"
    harm_template_string = "<template exp=\"G(true |-> ( TEMPLATE ))\" />\n"
    config_file_string = harm_config_template_header
    for template in fully_instantiated_templates:
        config_file_string =config_file_string + harm_template_string.replace("TEMPLATE", template)

    config_file_string = config_file_string + harm_config_template_tail

    # Load harm_config.xml
    try:
        subprocess.run(f"touch {config_output}", stdout=subprocess.DEVNULL, shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print("Error:Failed to create configuration file!" + f"{e}")
        exit(1)
    
    with open(f"{config_output}", "w") as file:
        file.write(config_file_string)


    #Run HARM on the generated configuration file
    try:
        subprocess.run(f"harm --csv ./{trace_file} --conf ./{config_output}", shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print("Error:Failed to run HARM!" + f"{e}")
        exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python InvGen.py <input_xml_file> <input_csv_trace>")
    else:
        input_file = sys.argv[1]
        trace_file = sys.argv[2]
        if not os.path.isfile(input_file):
            print(f"Error: File '{input_file}' does not exist.")
            sys.exit(1)
        if not os.path.isfile(input_file):
           print(f"Error: File '{trace_file}' does not exist.")
           sys.exit(1)

        main(input_file,trace_file)