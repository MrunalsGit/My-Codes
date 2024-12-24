import math

a = float(input("Enter number to find square root = "))

if a < 0 :
    print("Don't enter negative number")
else:
    sqrt = math.sqrt(a)
    print("Square root of ", a , " is : ", sqrt)
