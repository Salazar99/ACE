import argparse
import pandas as pd
import sys
import re

import enum

class Proposition:
    def __init__(self, proposition):
        self.proposition = proposition

    def __str__(self):
        return f"Proposition({self.proposition})"
    
    def getProposition(self):
        return self.proposition
    
#Containts a numerical constant
class NumericalConstant(Proposition):
    def __init__(self, value):
        super().__init__(value)
        self.value = float(value)

    def evaluate(self,trace,time):
        return self.value

#Contains a boolean proposition
class BooleanProposition(Proposition):
    def __init__(self, proposition):
        # Remove any surrounding parentheses
        if proposition.startswith("(") :
            proposition = proposition[1:].strip()
        if proposition.endswith(")"):
            proposition = proposition[:-1].strip()
        super().__init__(proposition)
    
    def evaluate(self, trace, time):
        if self.proposition == "True":
            return True
        if self.proposition == "False":
            return False
        # Check if the proposition is in the trace at the given time
        for key in trace[time].keys():
            if self.proposition == key:
                return trace[time][key]
        #If the proposition is not found in the trace, raise an error
        raise KeyError(f"Proposition '{self.proposition}' not found in the trace!!")

class NumericExpression:
    class Operator(enum.Enum):
            LT = '<'
            LE = '<='
            GT = '>'
            GE = '>='
            EQ = '=='
            NE = '!='

            @staticmethod
            def from_string(op_str):
                for op in NumericExpression.Operator:
                    if op.value == op_str:
                        return op
                return None
    
    def __init__(self,expression):
        def parse_expression(expr):
            # Order matters: longer operators first
            operators = ['<=', '>=', '==', '!=', '<', '>']
            for op in operators:
                parts = expr.split(op)
                if len(parts) == 2:
                    left = parts[0].strip()
                    right = parts[1].strip()
                    operator = NumericExpression.Operator.from_string(op)
                    return left, operator, right
            return expr.strip(), None, None

        self.raw = expression
        self.leftop_str, self.operator, self.rightop_str = parse_expression(expression)


        # Determine if leftop and rightop are numeric or Boolean expressions
        # Check if leftop is a constant numerical value
        if re.match(r'^\d+(\.\d+)?$', self.leftop_str):
            self.leftop = NumericalConstant(self.leftop_str)
        else:
            self.leftop = BooleanProposition(self.leftop_str)
        # Check if rightop is a constant numerical value    
        if re.match(r'^\d+(\.\d+)?$', self.rightop_str):
            self.rightop = NumericalConstant(self.rightop_str)
        else:
            self.rightop = BooleanProposition(self.rightop_str)

    #To string function
    def __str__(self):
        return f"NumericExpression({self.raw})"
    
    #Evaluate the expression on the given value
    def evaluate(self, trace,time):
        # This is a placeholder for the actual evaluation logic
        # You would need to implement the logic to evaluate the expression
        # based on the operator and the provided value.
        if self.operator == NumericExpression.Operator.LT:
            return self.leftop.evaluate(trace,time) < self.rightop.evaluate(trace,time)
        elif self.operator == NumericExpression.Operator.LE:
            return self.leftop.evaluate(trace,time) <= self.rightop.evaluate(trace,time)
        elif self.operator == NumericExpression.Operator.GT:
            return self.leftop.evaluate(trace,time) > self.rightop.evaluate(trace,time)
        elif self.operator == NumericExpression.Operator.GE:
            return self.leftop.evaluate(trace,time) >= self.rightop.evaluate(trace,time)
        elif self.operator == NumericExpression.Operator.EQ:
            return self.leftop.evaluate(trace,time) == self.rightop.evaluate(trace,time)
        elif self.operator == NumericExpression.Operator.NE:
            return self.leftop.evaluate(trace,time) != self.rightop.evaluate(trace,time)
        else:
            raise ValueError("Invalid operator")

class LTLNEXT:
    def __init__(self, expression):
        self.expression_str = expression
        expression_parsed = expression
        match = re.match(r'^\s*X\((.*)\)\s*$', expression_parsed)
        if match:
            inner_expression = match.group(1).strip()
            self.expression = LTLNEXT(inner_expression)
        else:
            inner_expression = re.sub(r'^\((.*)\)$', r'\1', expression_parsed).strip()
            self.expression = BooleanProposition(inner_expression)
        

    
    
    def __str__(self):
        return f"X({self.expression})"
    
    def evaluate(self, trace, time):
        if time + 1 >= len(trace):
            return False
        return self.expression.evaluate(trace, time+1)

class LTLAss:
    class Implication(enum.Enum):
            IMPL = '->'
            SEREIMPL = '|->'
            SERENEXTIMPL = '|=>'

    def __init__(self,Ass):
        self.Asstring = Ass.replace(" ", "")
        #Remove always 
        if self.Asstring.startswith("G(") and self.Asstring.endswith(")"):
            self.Asstring = self.Asstring[2:-1]
        # Find and save all numeric expressions with their positions
        self.numexprs = {}
        def replacer(match):
            idx = len(self.numexprs)
            placeholder = f"NUM{idx}"
            self.numexprs[placeholder] = NumericExpression(match.group(0))
            return placeholder

        # Substitute each numeric expression with a unique placeholder in order to use spot parser
        self.EvaluationFormula = re.sub(r'[a-zA-Z_][a-zA-Z0-9_]*\s*(<=|>=|==|!=|<|>)\s*\d+(\.\d+)?', replacer, self.Asstring)
        print("Processed assertion:", self.EvaluationFormula)

        #Now, the assertion string no longer contain plain numerical expression but placeholders whose evaluation is added to the trace as "new signals"
        if "|->" in self.EvaluationFormula or "|=>" in self.EvaluationFormula or "->" in self.EvaluationFormula:
            if "|->" in self.EvaluationFormula:
                self.implication = LTLAss.Implication.SEREIMPL 
                self.Antecedent_str, self.Consequent_str = self.EvaluationFormula.split("|->")
            elif "|=>" in self.EvaluationFormula:
                self.implication = LTLAss.Implication.SERENEXTIMPL
                self.Antecedent_str, self.Consequent_str = self.EvaluationFormula.split("|=>")
            elif "->" in self.EvaluationFormula:
                self.implication = LTLAss.Implication.IMPL
                self.Antecedent_str, self.Consequent_str = self.EvaluationFormula.split("->")
            else:
                raise ValueError("Invalid assertion format. Expected '|->' or '|=>'.")
        
            #Both Ant and Con can be formed by multiple propositions that need to be splitted pair by pair 
            self.Antecedent = BooleanProposition(self.Antecedent_str)
            self.Consequent = BooleanProposition(self.Consequent_str)
        else:
            self.Antecedent = BooleanProposition(self.EvaluationFormula)
            self.Consequent = BooleanProposition("True")  # If no implication, assume consequent is always true
            # Remove eventual curly brackets from antecedent and consequent

    def getExpr(self):
        return self.numexprs
    
    def evaluate(self, trace,time):
        if(self.implication == LTLAss.Implication.SERENEXTIMPL):
            # Evaluate the antecedent at the current time and the consequent at the next time
            return (self.Antecedent.evaluate(trace,time)) and self.Consequent.evaluate(trace,time+1)
        else:
            return (self.Antecedent.evaluate(trace,time)) and self.Consequent.evaluate(trace,time)

def main():
    parser = argparse.ArgumentParser(description="Filter a CSV file by a given property.")
    parser.add_argument('--csv', type=str, help="Path to the CSV file to be filtered")
    parser.add_argument('--ass', type=str, help="Property (column name) to filter by")
    args = parser.parse_args()

    if len(sys.argv) == 1:
        parser.print_help(sys.stderr)
        sys.exit(1)

    try:
        df = pd.read_csv(args.csv)
    except Exception as e:
        print(f"Error reading CSV file: {e}")
        return
    # Trace conversion for spot
    trace = [
        {key.split(' ')[1]: value for key, value in row.dropna().to_dict().items()}
        for _, row in df.iterrows()
    ]


    Assertion = args.ass
    #Need to check for correct formatting of assertion
    #TODO Check the correct structure of the assertion


    #Convert it to Automata
    filtering_prop = LTLAss(Assertion)

    
    # Get the header (column names) of the trace
    header = list(trace[0].keys()) if hasattr(trace[0], 'keys') else list(trace[0])
    # Add placeholders column to the trace
    for placeholder, numexpr in filtering_prop.getExpr().items():
        #Add the placeholder evaluation to the trace
        for row in range(len(trace)):
            trace[row][placeholder] = numexpr.evaluate(trace, row)

    #check values in which property is true
    #filter out csv lines that are false
    for i in range(len(trace)):
        if not filtering_prop.evaluate(trace, i):
            trace[i] = None

    #Write the filtered csv
    #Remove None values from the trace
    trace = [row for row in trace if row is not None]
    #Convert the augmented trace to a DataFrame
    filtered_df = pd.DataFrame(trace, columns=header)
    #Write the filtered DataFrame to a CSV file
    filtered_csv_path = args.csv.replace('.csv', '_filtered.csv')
    try:
        filtered_df.to_csv(filtered_csv_path, index=False)
        print(f"Filtered CSV saved to {filtered_csv_path}")
    except Exception as e:
        print(f"Error writing filtered CSV file: {e}")
        return


if __name__ == "__main__":
    main()