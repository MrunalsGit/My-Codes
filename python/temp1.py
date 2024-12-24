
def factorial(num):
    fact = 1

    while num >=1:
        fact = fact*num
        num -= 1

    print(fact)

number = int(input("Please Enter your number: "))

factorial(number)
