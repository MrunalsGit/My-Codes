a = (input("Enter 1st number ="))
b =(input("Enter 2nd number ="))
c = (input("Enter  number ="))

list = []

list.append(a)
list.append(b)
list.append(c)





def max(a,b,c) :

    maximum = a
    
    for x in list :
        
        n = 1

        while n < 3 :

            if x < list[n] :

                maximum = list[n]
                

            n += 1

    print(maximum)

    
max(a,b,c)
