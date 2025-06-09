import os
import subprocess
import sys
import re
import xml.etree.ElementTree as ET

config_output = "./invariant_config"

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
    
    #This script will parse the xml file and create another xml file for HARM
    # Generate a new XML structure for HARM
    harm_root = ET.Element("harm_templates")

    # Extract templates and variables from the input XML
    templates = [temp.attrib.get("name") for temp in root.find("tpls") if temp.attrib.get("name")]
    variables = [var.attrib.get("name") for var in root.find("vars") if var.attrib.get("name")]

    #WE ASSUME TEMPLATES WITH AT MOST 2 VARIABLES
    # Create combinations of templates and variables
    fully_instantaited_templates = []
    for template in templates:
        # Count matches for placeholders like P0, P1, P2, etc.
        matched_placeholders = re.findall(r'\bP\d+\b', template)
        placeholder_count = len(matched_placeholders)

        match placeholder_count:
            case 0:
                # No placeholders, just add the template
                harm_template = ET.SubElement(harm_root, "template", name=template)
                print(f"Warning: Template '{template}' has no placeholders. Skipping.")
            case 1:
                # One placeholder, add it to the template
                for var in variables:
                    template_instance = template.replace(matched_placeholders[0], var)

                    #TODO add logic to manage the extraction of upper and lower bound
                    if("LOWERB" in template_instance or "UPPERB" in template_instance):
                        continue

                    fully_instantaited_templates.append(template_instance)

            case 2:
                if(len(variables) < 2):
                    print(f"Warning: Available variables is only one but expects two. Skipping.")
                    continue
                # Two placeholders, add them to the template
                for var1 in variables:
                    for var2 in variables:
                        if var1 != var2:
                            template_instance = template.replace(matched_placeholders[0], var1).replace(matched_placeholders[1], var2)
                            fully_instantaited_templates.append(template_instance)
            case _:
                print(f"Warning: Template '{template}' has more than 2 placeholders. Skipping.")

    #Here I should have all the templates that needs to be checked by harm 
    #<template dtLimits="5D,3W,15A,-0.1E,U" exp="TEMPLATE" />
    harm_config_template_header = "<?xml version='1.0' encoding='utf-8'?>\n<harm>\n 	<context name=\"default\">\n"
    harm_config_template_tail = "</context>\n</harm>"
    harm_template_string = "<template dtLimits=\"5D,3W,15A,-0.1E,U\" exp=\"TEMPLATE\" />\n"
    config_file_string = harm_config_template_header
    for template in fully_instantaited_templates:
        config_file_string =config_file_string + harm_template_string.replace("TEMPLATE", template)

    config_file_string = config_file_string + harm_config_template_tail

    # Load harm_config.xml
    try:
        subprocess.run(f"touch {config_output}", stdout=subprocess.DEVNULL, shell=True, check=True)
    except subprocess.CalledProcessError as e:
        print("Error:Failed to create configuration file!" + f"{e}")
        exit(1)
    
    with open("./invariant_config.xml", "w") as file:
        file.write(config_file_string)


    #Run HARM on the generated configuration file
    try:
        subprocess.run(f"harm --csv {trace_file} --conf {config_output}")
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