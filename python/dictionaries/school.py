
student = {}

name = {}

age = {}

n = 0

while n < 2 :

    age = int(input("Enter your age = \n"))


    if age > 18 :

        name = input("Enter your name = \n")

        student["Name"] = name
        student["Age"] = age
    n+=1


print (student)

    
    