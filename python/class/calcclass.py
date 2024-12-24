y = int(input("Enter first operand = "))
z = int(input("Enter second operand = "))

class calc :

    def __init__(self,num1,num2) :

        self.num1 = int(num1)
        self.num2 = int(num2)

    def add(self) :
        print(f'{self.num1}+{self.num2}={self.num1+self.num2}')

    def sub(self):
        print(f'{self.num1}-{self.num2}={self.num1-self.num2}')
    
    def mult(self):
        print(f'{self.num1}*{self.num2}={self.num1*self.num2}')

    def div(self):
        print(f'{self.num1}/{self.num2}={self.num1/self.num2}')

calculator = calc(y,z)

operator = input("Enter operation = ")

if operator == "+" : 
    calculator.add()
elif operator == "-" :
    calculator.sub()

elif operator == "*" :
    calculator.mult()

elif operator == "/" :
    calculator.div()