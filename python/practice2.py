# from tkinter import *

# root = Tk()

# root.geometry("733x434")

# def c1() :
#     print("You pressed button 1")

# def c2() :
#     print("You pressed button 2")

# def c3() :
#     print("You pressed button 3")

# def c4() :
#     print("You pressed button 4")

# banner = Label(text="Ready", bg = "yellow")
# banner.pack(side = BOTTOM, fill = X)

# f1 = Frame(root, borderwidth=15, bg= "grey", relief= SUNKEN)
# f1.pack(side = LEFT, fill = Y)

# l2 = Label(f1, text= "BUTTONS", fg = "red")
# l2.pack()

# b1 = Button(f1, text="Button1", bg = "cyan", command=c1)
# b1.pack(pady= 15)

# b2 = Button(f1, text="Button2", bg = "cyan", command=c2)
# b2.pack(pady = 10)

# b3 = Button(f1, text="Button3", bg = "cyan", command=c3)
# b3.pack(pady = 10)

# b4 = Button(f1, text="Button4", bg = "cyan", command=c4)
# b4.pack(pady = 10)
# root.mainloop()


# b4 = Button(root , text = "Check ongoing discount", font = ("Arial", 13))
# b4.grid( row = 4, column = 1 )

# b5 = Button(root , text = "Rent enquiry", font = ("Arial", 13))
# b5.grid( row = 3, column = 2, padx = 100 , sticky= W)

# b6 = Button(root , text = "Rent a bike", font = ("Arial", 13))
# b6.grid( row = 3, column = 1 , pady = 50, sticky= W)

# b7 = Button(root , text = "Enquiry about rented bike", font = ("Arial", 13))
# b7.grid( row = 4, column = 2, padx = 100 , sticky= W)

# from tkinter import *
# from PIL import Image , ImageTk
# root = Tk()

# root.geometry("1440x700")

# photo = Image.open("C:\\Users\\bhama\\Desktop\\motorcycle-logo.jpg")
# resized = photo.resize((400,650), Image.ANTIALIAS)
# final = ImageTk.PhotoImage(resized)

# label_i1 = Label(root , image = final , width = 500 , height = 650)
# label_i1.pack()

# root.mainloop()

# x = 1


# while x < 5:
#     y = 0
#     while y < x :
#         if y < x:
#             print("*")
#             y += 1
#     x += 1
# print ("hello world")


# a = 1

# if a > 5:
#                                                                  print("NO")
# else:
#  print("false")

# a = 5
# print(a)
# a=6

# def areacircle(rad):

#     pi = 3.14
#     area = pi * rad * rad
#     print("Area of circle = ", area)


# rad = int(input("Enter radius of circle = \n"))

# areacircle(rad)

# def tp():
#     a = input("n")
#     b = int(input("n"))
#     return a,b

# n,num = tp()
# print(n,num)

# a = 2e5
# print(a)

# dict = [1,2,3,4,]

# s = sum(dict[1:3])
# print(s)
# print(dict.index(1))
# a,b,c,d = dict
# print(a,b,c)

# t = (2,3,4,5,3)
# print(t.index(3))

# # Function to collect user details and marks
# def collect_marks(n):
#     students = {}  # Dictionary to store student data

#     for i in range(n):
#         name = input(f"Enter the name of student {i+1}: ")
        
#         # Collecting marks for each subject
#         physics = int(input(f"Enter Physics marks for {name}: "))
#         chemistry = int(input(f"Enter Chemistry marks for {name}: "))
#         math = int(input(f"Enter Math marks for {name}: "))
        
#         # Calculate total and average marks
#         total = physics + chemistry + math
#         avg = total / 3
        
#         # Store in dictionary
#         students[name] = {
#             "Physics": physics,
#             "Chemistry": chemistry,
#             "Math": math,
#             "Total": total,
#             "Average": avg
#         }
    
#     # Printing the details
#     for name, details in students.items():
#         print(f"\n{name}'s Marks:")
#         print(f"  Physics: {details['Physics']}")
#         print(f"  Chemistry: {details['Chemistry']}")
#         print(f"  Math: {details['Math']}")
#         print(f"  Total: {details['Total']}")
#         print(f"  Average: {details['Average']:.2f}")

#         print("\n\n\n", students)

# # Number of users
# n = int(input("Enter the number of students: "))
# collect_marks(n)

# def marks():

#     if 1 > 0 :
#         grade = "a"

#     print(grade)


# marks()

# dict = {"a":1,"b":2,"c":3}

# d = sum(dict.values())/len(dict.keys())
# print (d)

# def min_max(list):
#     min = list[0]
#     max = list[0]
#     sum = 0

#     for x in list:
#         if x > max:
#             max = x

#     for x in list:
#         if x < min:
#             min = x

#     for x in list:
#         sum = sum + x

#     return (min,max,sum)

# list = [1,2,3,45,67,8,9,0]
# min,max,sum = min_max(list)

# print(min,max,sum)



# print("hello world")
# a=input('name')
# print("hello'",a)



# N=int(input("Enter a number"))
# A=input("enter a name")

# # for i in range (N):
# print(A*N)