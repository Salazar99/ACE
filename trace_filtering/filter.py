import argparse
import pandas as pd
import sys
import re
import spot
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

    def getValue(self, value):
        return self.value

#Contains a boolean proposition
class BooleanProposition(Proposition):
    def __init__(self, proposition):
        super().__init__(proposition)
    
    def getValue(self, trace_vector):
        if self.proposition not in trace_vector:
            raise KeyError(f"Proposition '{self.proposition}' not found in the trace!!")
        return trace_vector[self.proposition]

#TODO: Need to implement the evaluation of the expression
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
        if self.leftop_str.isdigit() or re.match(r'^\d+(\.\d+)?$', self.leftop_str):
            self.leftop = NumericalConstant(self.leftop_str)
        else:
            self.leftop = BooleanProposition(self.leftop_str)
        # Check if rightop is a constant numerical value    
        if self.rightop_str.isdigit() or re.match(r'^\d+(\.\d+)?$', self.rightop_str):
            self.rightop = NumericalConstant(self.rightop_str)
        else:
            self.rightop = BooleanProposition(self.rightop_str)

    #To string function
    def __str__(self):
        return f"NumericExpression({self.raw})"
    
    #Evaluate the expression on the given value
    def evaluate(self, trace_vector):
        # This is a placeholder for the actual evaluation logic
        # You would need to implement the logic to evaluate the expression
        # based on the operator and the provided value.
        if self.operator == NumericExpression.Operator.LT:
            return self.leftop.getValue(trace_vector) < self.rightop.getValue(trace_vector)
        elif self.operator == NumericExpression.Operator.LE:
            return self.leftop.getValue(trace_vector) <= self.rightop.getValue(trace_vector)
        elif self.operator == NumericExpression.Operator.GT:
            return self.leftop.getValue(trace_vector) > self.rightop.getValue(trace_vector)
        elif self.operator == NumericExpression.Operator.GE:
            return self.leftop.getValue(trace_vector) >= self.rightop.getValue(trace_vector)
        elif self.operator == NumericExpression.Operator.EQ:
            return self.leftop.getValue(trace_vector) == self.rightop.getValue(trace_vector)
        elif self.operator == NumericExpression.Operator.NE:
            return self.leftop.getValue(trace_vector) != self.rightop.getValue(trace_vector)
        else:
            raise ValueError("Invalid operator")

class LTLAss:
    def __init__(self, Ass):
        self.Asstring = Ass

        # Find and save all numeric expressions with their positions
        self.expressions = {}
        def replacer(match):
            idx = len(self.numexprs)
            placeholder = f"NUM{idx}"
            self.numexprs[placeholder] = NumericExpression(match.group(0))
            return placeholder

        # Substitute each numeric expression with a unique placeholder
        self.preprocessed = re.sub(r'\d+(\.\d+)?', replacer, Ass)
        print("Preprocessed assertion:", self.preprocessed)
        print("Extracted numexpr mapping:", self.numexprs)

        #use the SPOTLTL parser
        self.SpotAss = spot.formula(Ass)
        #print for debug
        print(self.SpotAss)

        self.automata = spot.translate(self.SpotAss)
    
    #Evaluate the assertion using the automata representation of spot. Need to evaluate the numeric expressions at each step using their evaluate function.
    #Trace: Entire trace execution trace
    #Time: Time at wich evaluation starts
    #return truth value of assertion on Trace at specified time
    def evaluate(self,trace,time):
        #We have numeric expressions that needs to be converted to boolean propositions to allow the automata to evaluate correctly.
        #Numeric expressions are mapped to placeholders in the automata using the self.numexpr map
        #I need to find at each time the value of the signals in the numexpr in the trace and then evaluate it to true or false
        # Evaluate numeric expressions at the current time step

        # Get the header (column names) of the trace
        header = list(trace[0].keys()) if hasattr(trace[0], 'keys') else list(trace[0])

        augmented_trace = []
        # Add placeholders column to the trace
        for placeholder, numexpr in self.numexprs.items():
            #Add the placeholder evaluation to the trace
            for row in trace:
                row[placeholder] = numexpr.evaluate(row)
                augmented_trace.append(row)
        
        #Start evaluatiing the automata at time 
        suffix = augmented_trace[time:]
        state = self.SpotAss.get_init_state_number()
        for step_props in suffix:
            for trans in self.SpotAss.out(state):
                if trans.cond.eval(step_props):
                    state = trans.dst
                    break
            else:
                return False
        return self.SpotAss.is_accepting_state(state)



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
    #Trace coversion for spot 
    trace = [
    frozenset(df.columns[row_idx][df.iloc[row_idx]].tolist())
    for row_idx in range(len(df))
    ]



    Assertion = args.ass
    #Need to check for correct formatting of assertion
    #TODO Check the correct structure of the assertion


    #Convert it to Automata
    filtering_prop = LTLAss(Assertion)

    #check values in which property is true
    #filter out csv lines that are false
    #TODO: Evaluate the Assertion on the trace and remove each line in which the assertion is false 

    #Write the filtered csv
    #TODO: Implement CSV writing

if __name__ == "__main__":
    main()