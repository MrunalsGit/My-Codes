a = int(input("Enter a number = "))

def fact(a) :

    sum = 1
 
    for i in range (1,a+1) :

        if i < a+1 :

            sum = i*sum

    print(a,"Factorial = ",sum)


fact(a)