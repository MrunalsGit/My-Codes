# a = int(input("Enter 1st operand = "))
# c = input("Enter operator = ")
# b = int(input("Enter 2nd operand = "))

# def calc(a,b,c) :

#     if c == "+" : 
#         print(a,"+",b,"=",a+b)

#     elif c == "-" :
#         print(a,"-",b,"=",a-b)

#     elif c == "*" :
#         print(a,"*",b,"=",a*b)

#     elif c == "/" :
#         print(a,"/",b,"=",a/b)

#     else :
#         print("Print operator from these = +-*/")


# calc(a,b,c)

ip = input("Enter operand-operator-operand = ")

a = int(ip[0])
c= ip[1]
b = int(ip[2])

def calc(a,b,c) :

    if c== "+" : 
        print(a,"+",b,"=",a+b)

    elif c== "-" :
        print(a,"-",b,"=",a-b)

    elif c== "*" :
        print(a,"*",b,"=",a*b)

    elif c== "/" :
        print(a,"/",b,"=",a/b)

    else :
        print("Choose operator from these = +-*/")


calc(a,b,c)
