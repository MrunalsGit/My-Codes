# # from tkinter import *
# # from customtkinter import *

# # root = CTk()
# # root.geometry("500x500")

# # def bike_names():

# #     list = {}
# #     return "\n".join(list)

# # def clear_text():
    
# #     input2.insert(0,bike_names())
    

  
# # r_name = StringVar()


# # input2 = CTkEntry( root ,textvariable= r_name, font = ('Arial',13), width = 200,height = 200)
# # input2.grid(row = 5 , column= 1, sticky= W , padx = 15, pady = 15)


# # b2 = CTkButton(master =root , text = "    Check Bikes Name     ", font = ("Arial", 13), corner_radius= 32 ,
# #                 command=clear_text)
# # b2.grid( row = 2, column = 1 , pady = 30, sticky= W )

# # root.mainloop()

# from tkinter import *

# root = Tk()

# root.geometry("500x500")



# name = StringVar()
# var = name

# def b1_gui():

#     e.delete(0,END)
#     print(var)

# e = Entry(textvariable=name)

# b1 = Button(text="Save", command= b1_gui)
# b1.pack()

# # setting default text
# e.insert(0,"hello")
# # if focus then erase it 
# e.bind('<FocusIn>',lambda args:e.delete('0','end'))
# e.pack()

# # # e2 is for testing purose
# # e2=Entry(root)
# # e2.pack()

# root.mainloop()

#Arithmetic Operator

# a = int(input("Enter a number = "))
# b = int(input("Enter second number = "))

# print("\n\nArithmatic Operators \n\n")

# print("Addition = ", a+b )
# print("Subtraction = ", a-b)
# print("Multiplication = ", a*b)
# print("Division = ", a/b)
# print("Modulus = ", a%b)
# print("Exponential = ", a**b)
# print("Floor Divison = ", a//b,"\n\n")


# #Assignment Operator

# print("Assignment Operators\n\n")

# c = 10
# print(" \'c=10\' : ", c)
# c += 4
# print(" \'c+=4\' : ",c)
# c -= 4
# print(" \'c-=4\' : ", c)
# c *= 2
# print(" \'c*=2\' : ", c)
# c /=2
# print(" \'c/=2\' : ", c)
# c %= 3
# print(" \'c%=3\' : ", c, "\n\n")


# #Comparison Operator

# print("Comparison Operators\n\n")

# a = int(input("Enter a number = "))
# b = int(input("Enter second number = "))

# print("\n a== b :", a==b)
# print(" a!=b :", a!=b)
# print(" a>b :", a>b)
# print(" a<b :", a<b)
# print(" a>=b :", a>=b)
# print(" a<=b :", a<=b, "\n\n")


# #Logical Operators

# print("Logical Operators\n\n")

# a = int(input("Enter a number = "))

# print("\n a > 5 and a < 20", a > 5 and a < 20)
# print(" a > 5 or a < 5", a > 5 or a < 5 )
# print(" not( a < 5 and a < 10)", not( a < 5 and a < 10), "\n\n")


# #Identity Operators

# print("Identity Operators\n\n")

# x = int(input("Enter a number = "))
# y = int(input("Enter second number = "))

# print("\n x is y : ", x is y)
# print(" x is not y : ", x is not y, "\n\n")

# #Membership Operator

# print("Membership Operator\n\n")

# branch = ["IT" , "Electrical" , "CSE" , "ENTC"]

# if "IT" in branch :
#     print("IT present in branch")
# else:
#     print("IT not present\n\n")

# #Bitwise Operator

# print("Bitwise Operator\n\n")

# a = int(input("Enter a number = "))
# b = int(input("Enter second number = "))

# print("\n a&b : ", a&b)
# print(" a|b : ", a|b)
# print(" a^b : ", a^b)
# print(" ~b : ", ~b)
# print(" a<<b : ", a<<b)
# print(" a>>b : ", a>>b)


#use for loop to get number's from 1 to 10

# for x in range (1,11):
#     print(x)

#use for loop from 2 to 101 with gap of 2 number

# sum = 0
# for x in range(2,101,2):
#     sum = sum + x

# print("Sum of all even numbers up to 100 = ", sum)

#take input from user and mult that number by 1 to 10 using for loop

# a = int(input("Enter number of which you need multiplication table =  "))

# for x in range(1,11):
#     print(f"{a} * {x} = {a*x}")


#Python program to find largest in list

# list = [10,20,40,5,50]

# greatest = list[0]

# for x in list:
    
#     if x > greatest :
#         greatest = x

# print(greatest , " is the greatest in the list")

#Python program to remove duplicates from list

# list = [10,2,35,10,50,2,50]
# newlist = []

# for x in list:
#     if x not in newlist :
#         newlist.append(x)

# for x in newlist :
#     print(x)

#Python program to find sum of all number in a list

# list = [10,23,34,24,55,56,7]
# sum = 0
# for x in list :
#     sum = sum + x

# print ("Sum of your elements in list is = ", sum)


# def rev_str(a):

#     print("Your reverse string is as follow : ")
#     for x in range (1,len(a)+1):
#         print(a[-x], end = "")

# a = input("Enter your string = \n")

# rev_str(a)


# def vow_cnt(a):

#     count = 0

#     print("Number of vowels in this string are = ", end = "")
#     for x in a :
#         if x == "a":
#             count += 1
#         elif x == "e":
#             count += 1
#         elif x == "i":
#             count += 1
#         elif x == "o":
#             count += 1
#         elif x == "u":
#             count += 1

#     return count

# a = input("Enter input = ")

# # print(vow_cnt(a))

# class tp:
#     def __init__(self,a,b):
#         self.name = a
#         self.amount= b

#     def details(self):
#         print("My name is " , self.name)

# class ntp(tp):
#     def __init__(self,a,b):
#         super().__init__(a,b)

#     def detail(self):
#         print("My name is " , self.name)




# a = ntp("M", 10)
# a.details()

# def tp(*arg):
#     print(sum(arg[0])+sum(arg[1]))

# a = [1,2,3]
# b = [5,6,7]

# tp(a,b)

# a = int(input("enter = "))

# p = True

# for x in range (2,a):
#     if a % x == 0:
#         p = False
# if a == 0 or a == 1:
#     print("Neither prime")
# elif p == True:
#     print("Its prime")
# else:
#     print("Its not prime")
# x = 0
# while True:
#     if x==6:
#         break
#     else:
#         print("hi")
#         x+=1

# def cricketers_database():
#     # Initialize variables to store data
#     cricketers = []  # List to hold cricketers' details
#     total_runs_indian = 0  # Total runs scored by Indian players
#     indian_player_count = 0  # Count of Indian players
#     max_test_runs = 0  # Maximum Test runs

#     # Input data for cricketers
#     while True:
#         name = input("Enter cricketer's name (or type 'stop' to finish): ")
#         if name.lower() == 'stop':
#             break
        
#         country = input(f"Enter {name}'s country: ")
#         test_runs = int(input(f"Enter {name}'s Test runs: "))
#         odi_runs = int(input(f"Enter {name}'s ODI runs: "))

#         # Append data to the cricketers list
#         cricketers.append({'name': name, 'country': country, 'test_runs': test_runs, 'odi_runs': odi_runs})
        
#         # Update max_test_runs if this player's Test runs are higher
#         if test_runs > max_test_runs:
#             max_test_runs = test_runs

#         # If the player is Indian, update Indian players' stats
#         if country.lower() == "india":
#             total_runs_indian += test_runs + odi_runs
#             indian_player_count += 1

#     # Calculate the average runs for Indian players
#     average_runs_indian = total_runs_indian / indian_player_count if indian_player_count > 0 else 0
    
#     return max_test_runs, average_runs_indian, cricketers



# max_test, avg_indian,list = cricketers_database()
# print(f"\nMaximum Test runs scored: {max_test}")
# print(f"Average runs scored by Indian players: {avg_indian:.2f}")

# print("\n\nList\n\n", list)

# try:
#     try :
#         a = b
#     except Exception as Exception:
#         print(Exception)
#     else:
#         print("How")
#     finally:
#         print("lamao")
# except:
#     print("failed")
# else:
#     print("Worked")

# n =2

# list = [{"phy" : 5,"chem" : 10,"math" : 15}, {"phy" : 25,"chem" : 50,"math" : 65}]

# for i in range(n):
#     print(f"Student{i+1} : Phy = {list[i]["phy"]} ; Chemistry : {list[i]["chem"]} ")

