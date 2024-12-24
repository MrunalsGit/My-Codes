ip = input("Enter operand-operator-operand = ")

a = 0
operator = 0
c = 0

for x in ip :

    if x == "+" or x == "-" or x == "*" or x == "/" :

        operator = x

new = ip.split(operator)

a = int(new[0])
c = int(new[1])


def calc(a,c,operator) :

    if operator == "+" : 
        print(a,"+",c,"=",a+c)

    elif operator == "-" :
        print(a,"-",c,"=",a-c)

    elif operator == "*" :
        print(a,"*",c,"=",a*c)

    elif operator == "/" :
        print(a,"/",c,"=",a/c)

    else :
        print("Choose operator from these = +-*/")


calc(a,c,operator)




