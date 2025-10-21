import argparse
import pandas as pd
import sys
import re
import os

import enum

class Proposition:
    def __init__(self, proposition):
        self.proposition = proposition

    def __str__(self):
        return f"Proposition({self.proposition})"
    
    def getProposition(self):
        return self.proposition
    
# Containts a numerical constant
class NumericalConstant(Proposition):
    def __init__(self, value):
        super().__init__(value)
        self.value = float(value)

    def evaluate(self,trace,time):
        return self.value, time

# Contains a boolean proposition
class BooleanProposition(Proposition):
    def __init__(self, proposition):
        # Remove any surrounding parentheses
        if proposition.startswith("(") :
            proposition = proposition[1:].strip()
        if proposition.endswith(")"):
            proposition = proposition[:-1].strip()
        super().__init__(proposition)
    
    def evaluate(self, trace, time):
        #print(f"Evaluating delay: {self.proposition}, Time: {time}")
        if self.proposition.startswith("X("):
            return LTLNEXT(self.proposition).evaluate(trace, time), time
        elif "&&" in self.proposition:
            # split (recursive if more than 1 &&)
            parts = self.proposition.split("&&", 1)
            # remove spaces
            left = parts[0].strip()
            right = parts[1].strip()
            s_left, _ = BooleanProposition(left).evaluate(trace, time)
            s_right, _ = BooleanProposition(right).evaluate(trace, time)
            return s_left and s_right, time 
        elif "||" in self.proposition:
            parts = self.proposition.split("||", 1)
            left = parts[0].strip()
            right = parts[1].strip()
            s_left, _ = BooleanProposition(left).evaluate(trace, time)
            s_right, _ = BooleanProposition(right).evaluate(trace, time)
            return s_left or s_right, time   
        elif "##" in self.proposition:
            parts = self.proposition.split("##", 1)
            left = parts[0].strip(" ()")
            match = re.match(r'^(\d+)', parts[1])
            # normal case ##n
            if match:
                right = re.sub(r'^\d+', '', parts[1]).strip(" ()")
                delay = int(match.group(1))

                # case var1##nvar2
                if left:
                    #print(BooleanProposition(left).evaluate(trace, time) and (False if time + delay >= len(trace) else BooleanProposition(right).evaluate(trace, time + delay)))
                    #return BooleanProposition(left).evaluate(trace, time) and (False if time + delay >= len(trace) else BooleanProposition(right).evaluate(trace, time + delay))
                    delayed_time = time + delay if time + delay < len(trace) else None
                    delayed_ttime = delayed_time
                    s_left, _ = BooleanProposition(left).evaluate(trace, time)
                    if time + delay >= len(trace):
                        s_right = False
                    else:
                        # save delayed_ttime in case more than one delay, right part has another delay
                        s_right, delayed_ttime = BooleanProposition(right).evaluate(trace, delayed_time)
                    
                    # case more than one delay
                    if (delayed_ttime is not None):
                        delayed_time = max(delayed_time, delayed_ttime)

                    return s_left and s_right, delayed_time
                # case ##nvar
                else:
                    if time + delay >= len(trace):
                        return False, time
                    else:
                        s_bool, _ = BooleanProposition(right).evaluate(trace, time + delay)
                        return s_bool, time + delay
            # case ##[n,m]
            else:
                # extract n and m
                match_range = re.match(r'\[(\d+):(\d+)\](.+)', parts[1])
                start = int(match_range.group(1))
                end = int(match_range.group(2))
                right = match_range.group(3).strip(" ()")

                delay_range = list(range(start, end + 1))
                #print(delay_range, right)
                
                # case var1##[n:m]var2
                if left:
                    s_left, _ = BooleanProposition(left).evaluate(trace, time)
                    for delay in delay_range:
                        delayed_time = time + delay
                        if delayed_time >= len(trace):
                            continue
                        s_right, _ = BooleanProposition(right).evaluate(trace, delayed_time)
                        if s_left and s_right:
                            return True, delayed_time
                    return False, time

                # case ##[n:m]var
                else:
                    for delay in delay_range:
                        delayed_time = time + delay
                        if delayed_time >= len(trace):
                            continue
                        s_bool, _ = BooleanProposition(right).evaluate(trace, delayed_time)
                        if s_bool:
                            return True, delayed_time
                    return False, time

        elif self.proposition.startswith("!"):
            inner = self.proposition[1:].strip()
            s_not, _ = BooleanProposition(inner).evaluate(trace, time)
            return not s_not, time
        elif self.proposition == "True" or self.proposition == "true":
            return True, time
        elif self.proposition == "False" or self.proposition == "false":
            return False, time
        # placeholder NUM0 ecc. case
        else:
        # Check if the proposition is in the trace at the given time
            for key in trace[time].keys():
                if self.proposition == key:
                    return trace[time][key], time
            # If the proposition is not found in the trace, raise an error
            raise KeyError(f"Proposition '{self.proposition}' not found in the trace!!")

class ArithmeticExpression:
    class Operator(enum.Enum):
            ADD = '+'
            SUB = '-'
            MUL = '*'
            DIV = '/'

            @staticmethod
            def from_string(op_str):
                for op in ArithmeticExpression.Operator:
                    if op.value == op_str:
                        return op
                return None
            
    def __init__(self,expression):
        def parse_expression(expr):
            # Order matters: longer operators first
            operators = ['+', '-', '*', '/']
            for op in operators:
                parts = expr.split(op, 1) # split only one time
                #print(parts)
                if len(parts) == 2:
                    left = parts[0].strip()
                    right = parts[1].strip()
                    operator = ArithmeticExpression.Operator.from_string(op)
                    return left, operator, right
            return expr.strip(), None, None

        self.raw = expression
        self.leftop_str, self.operator, self.rightop_str = parse_expression(expression)

        if any(op in self.leftop_str for op in ['+', '-', '*', '/']):
            self.leftop = ArithmeticExpression(self.leftop_str)
        # Check if leftop is a constant numerical value
        elif re.match(r'^\d+(\.\d+)?$', self.leftop_str):
            self.leftop = NumericalConstant(self.leftop_str)
        else:
            self.leftop = BooleanProposition(self.leftop_str)

        if (self.rightop_str is not None):
            if any(op in self.rightop_str for op in ['+', '-', '*', '/']):
                self.rightop = ArithmeticExpression(self.rightop_str)
            # Check if rightop is a constant numerical value 
            elif re.match(r'^\d+(\.\d+)?$', self.rightop_str):
                self.rightop = NumericalConstant(self.rightop_str)
            else:
                self.rightop = BooleanProposition(self.rightop_str)

    # To string function
    def __str__(self):
        return f"ArithmeticExpression({self.raw})"
    
    # Evaluate the expression on the given value
    def evaluate(self, trace, time):
        # This is a placeholder for the actual evaluation logic
        # You would need to implement the logic to evaluate the expression
        # based on the operator and the provided value.
        left, _ = self.leftop.evaluate(trace, time)
        if self.operator is not None: right, _ = self.rightop.evaluate(trace, time)
        if self.operator == ArithmeticExpression.Operator.ADD:
            return (left + right), time
        elif self.operator == ArithmeticExpression.Operator.SUB:
            return (left - right), time
        elif self.operator == ArithmeticExpression.Operator.MUL:
            return (left * right), time
        elif self.operator == ArithmeticExpression.Operator.DIV:
            return (left / right), time
        # only leftop
        elif (self.operator is None):
            return left == 1
        else:
            raise ValueError("Invalid operator")


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


        # Determine if leftop and rightop are arithmetic, numeric or Boolean expressions
        if any(op in self.leftop_str for op in ['+', '-', '*', '/']):
            self.leftop = ArithmeticExpression(self.leftop_str)
        # Check if leftop is a constant numerical value
        elif re.match(r'^\d+(\.\d+)?$', self.leftop_str):
            self.leftop = NumericalConstant(self.leftop_str)
        else:
            self.leftop = BooleanProposition(self.leftop_str)

        if (self.rightop_str is not None):
            if any(op in self.rightop_str for op in ['+', '-', '*', '/']):
                self.rightop = ArithmeticExpression(self.rightop)
            # Check if rightop is a constant numerical value 
            elif re.match(r'^\d+(\.\d+)?$', self.rightop_str):
                self.rightop = NumericalConstant(self.rightop_str)
            else:
                self.rightop = BooleanProposition(self.rightop_str)

    # To string function
    def __str__(self):
        return f"NumericExpression({self.raw})"

    # Evaluate the expression on the given value
    def evaluate(self, trace, time):
        # This is a placeholder for the actual evaluation logic
        # You would need to implement the logic to evaluate the expression
        # based on the operator and the provided value.
        left, _ = self.leftop.evaluate(trace,time)
        if self.operator is not None: right, _ = self.rightop.evaluate(trace,time)
        if self.operator == NumericExpression.Operator.LT:
            return left < right
        elif self.operator == NumericExpression.Operator.LE:
            return left <= right
        elif self.operator == NumericExpression.Operator.GT:
            return left > right
        elif self.operator == NumericExpression.Operator.GE:
            return left >= right
        elif self.operator == NumericExpression.Operator.EQ:
            return left == right
        elif self.operator == NumericExpression.Operator.NE:
            return left != right
        # only leftop
        elif (self.operator is None):
            return left == 1
        else:
            raise ValueError("Invalid operator")

class LTLNEXT:
    def __init__(self, expression):
        self.expression_str = expression
        expression_parsed = expression
        #match = re.match(r'^\s*X\((.*)\)\s*$', expression_parsed)
        match = re.match(r'^\s*X\((.*)\s*$', expression_parsed)
        if match:
            # remove first X() and then recursion
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
        # remove spaces
        self.Asstring = Ass.replace(" ", "")
        #Remove always
        print("Assertion: ", self.Asstring)
        if self.Asstring.startswith("G(") and self.Asstring.endswith(")"):
            self.Asstring = self.Asstring[2:-1]
        # Find and save all numeric expressions with their positions
        self.numexprs = {}
        def replacer(match): # automatically called by re.sub and it passes a match object (re.Match)
            idx = len(self.numexprs)
            placeholder = f"NUM{idx}"
            self.numexprs[placeholder] = NumericExpression(match.group(0)) # match.group(0) is the self.Asstring
            print(placeholder, ": ", match.group(0))
            return placeholder

        # Substitute each numeric expression with a unique placeholder in order to use spot parser
        # Replace reg expression with replacer function in self.Asstring
        # suppose self.Asstring = "(busy<=5)|->(temperature>10.5)"
        # {"NUM0": NumericExpression("busy<=5"),
        #  "NUM1": NumericExpression("temperature>10.5")}
        # Processed assertion: (NUM0)|->(NUM1)
        # suppose self.Asstring = "(busy>=5&&temperature<10|=>busy>10||temperature<5)"
        # Processed assertion: NUM0&&NUM1|=>NUM2||NUM3
        self.EvaluationFormula = re.sub(
            # reg that identifies (var op decimal) or (var boolean/delay op) with eventually :: inside var
            #r'[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*(?:\s*(<=|>=|==|!=|<|>)\s*\d+(\.\d+)?|(?=\s*(&&|\|\||\)|$)))',
            #r'[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*(?:\s*(<=|>=|==|!=|<|>)\s*\d+(\.\d+)?|(?=\s*(##|\)|&&|\|\||$)))',

            #r'[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*(?:\s*(<=|>=|==|!=|<|>)\s*(\d+(\.\d+)?|[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)?)|(?=\s*(##|\)|&&|\|\||$)))',
            
            r'''
            (
                [a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*              # variabile con eventuale ::
                (?:\s*(?:\+|-|\*|/)\s*[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)*)*  # operazioni aritmetiche
                \s*(<=|>=|==|!=|<|>)\s*                                        # operatore confronto
                (\d+(\.\d+)?|[a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)?)  # numero o variabile
            )
            |
            (
                [a-zA-Z_][a-zA-Z0-9_]*(::[a-zA-Z_][a-zA-Z0-9_]*)?             # variabile singola
                (?!\()                                                       # *non* seguita da parentesi aperta (esclude chiamate funzione come X(...)
            )
            ''',

            replacer, 
            self.Asstring,
            flags=re.VERBOSE
        )
        print("Processed assertion:", self.EvaluationFormula)
        #print("numexprs: ", self.numexprs)

        # Now, the assertion string no longer contain plain numerical expression but placeholders whose evaluation is added to the trace as "new signals"
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
        
            # Both Ant and Con can be formed by multiple propositions that need to be splitted pair by pair 
            self.Antecedent = BooleanProposition(self.Antecedent_str)
            # Check if X() in the consequent
            
            if re.match(r'^\s*X\(', self.Consequent_str):
                self.Consequent = LTLNEXT(self.Consequent_str)
            else:
                self.Consequent = BooleanProposition(self.Consequent_str)
        else:
            self.implication = None
            self.Antecedent = BooleanProposition(self.EvaluationFormula)
            self.Consequent = BooleanProposition("True")  # If no implication, assume consequent is always true
            # Remove eventual curly brackets from antecedent and consequent

    def getExpr(self):
        return self.numexprs
    
    def evaluate(self, trace, time):
        
        if self.implication:
            # Obtain boolean value and eventual delayed time
            antecedent_satisfied, antecedent_satisfied_time = self.Antecedent.evaluate(trace, time)
            

            # '|=>' (SERENEXTIMPL)
            if self.implication == LTLAss.Implication.SERENEXTIMPL:
                consequent_time = antecedent_satisfied_time + 1 if antecedent_satisfied_time is not None else None
                if consequent_time is None or consequent_time >= len(trace):
                    return False
                consequent, _ = self.Consequent.evaluate(trace, consequent_time)
                return antecedent_satisfied and consequent
            # '|->' (SEREIMPL) o '->' (IMPL)
            else:
                if antecedent_satisfied_time is None or antecedent_satisfied_time >= len(trace):
                    return False
                consequent, _ = self.Consequent.evaluate(trace, antecedent_satisfied_time)
                return antecedent_satisfied and consequent
        else:
            antecedent, _ = self.Antecedent.evaluate(trace, time)
            consequent, _ = self.Consequent.evaluate(trace, time)
            return antecedent and consequent 

def main():
    parser = argparse.ArgumentParser(description="Filter a CSV file by a given property.")
    parser.add_argument('--csv', type=str, required=True, help="Path to the CSV file to be filtered")
    parser.add_argument('--ass', type=str, required=True, help="Property (column name) to filter by")
    parser.add_argument('--out', type=str, help="Output name file (e.g.: filtered.csv)")
    args = parser.parse_args()

    if len(sys.argv) == 1:
        parser.print_help(sys.stderr)
        sys.exit(1)

    try:
        df = pd.read_csv(args.csv)
    except Exception as e:
        print(f"Error reading CSV file: {e}")
        return
    
    # Trace conversion for spot. Dictionary with key second name of the column, without NaN values
    # E.g.: Time busy request response
    #   0   True      False   NaN
    #   1   False     True    True
    # [
    #     {"busy": True, "request": False},
    #     {"busy": False, "request": True, "response": True}
    # ]
    trace = [
        {key.split(' ')[1]: value for key, value in row.dropna().to_dict().items()}
        for _, row in df.iterrows()
    ]


    Assertion = args.ass
    # Need to check for correct formatting of assertion
    #TODO Check the correct structure of the assertion


    #Convert it to Automata
    filtering_prop = LTLAss(Assertion)

    
    # Get the header (column names) of the trace
    header = list(trace[0].keys()) if hasattr(trace[0], 'keys') else list(trace[0])
    # Add placeholders column to the trace
    for placeholder, numexpr in filtering_prop.getExpr().items():
        # Add the placeholder evaluation to the trace, trace will have new columns with placeholder name and evaluation
        # Placeholder are evaluated without considering any operation (not, delay ecc.)
        for row in range(len(trace)):
            trace[row][placeholder] = numexpr.evaluate(trace, row)

    # check values in which property is true thanks to added placeholders
    # filter out csv lines that are false
    #for i in range(len(trace)):
        #print(trace[i])
    #    if not filtering_prop.evaluate(trace, i):
    #        trace[i] = None
        #print(trace[i])


    rows_to_keep = set()

    # Add new rows if delay in antecedent
    def get_antecedent_rows(antecedent, start_time):
        relevant_rows = []
        current_time = start_time

        # Regex that splits if ##. E.g.: (!(NUM0)##1(NUM1)) -> ['!(NUM0)', '1', '(NUM1)']
        pattern = r"##(\d+)"
        parts = re.split(pattern, antecedent)
        #print(start_time)

        for i in range(0, len(parts), 2):  # Itera solo sulle proposizioni
            # delay (if present)
            delay = int(parts[i + 1]) if (i + 1) < len(parts) else 0

            current_time += delay
            #print(current_time)
            relevant_rows.append(current_time)

        return relevant_rows

    for i in range(len(trace)):
        if filtering_prop.evaluate(trace, i):
            rows_to_keep.add(i)  # Add current row
            # Add (eventually) delay rows in the antecedent
            antecedent_rows = get_antecedent_rows(filtering_prop.Antecedent.proposition, i)
            rows_to_keep.update(antecedent_rows)

    trace = [trace[i] for i in sorted(rows_to_keep) if trace[i] is not None]

    # Write the filtered csv
    # Remove None values from the trace
    #trace = [row for row in trace if row is not None]
    # Convert the augmented trace to a DataFrame
    filtered_df = pd.DataFrame(trace, columns=header)
    # Write the filtered DataFrame to a CSV file
    # Se è specificato --out, usa quello. Altrimenti genera nome automaticamente.
    if args.out:
        filtered_csv_path = args.out
    else:
        filtered_csv_path = args.csv.replace('.csv', '_filtered.csv')
    try:
        #filtered_df.to_csv(filtered_csv_path, index=False)
        filtered_df.to_csv(filtered_csv_path, index=False, header=df.columns)
        print(f"Filtered CSV saved to {filtered_csv_path}")
    except Exception as e:
        print(f"Error writing filtered CSV file: {e}")
        return


if __name__ == "__main__":
    main()