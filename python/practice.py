

# list  = [10,23,30,50,4,3,5,7]
"""
n = 1

largest = 10

while n < len((list)):
    if list[n-1] > list[n] :
        largest = list[n-1]
    n += 1

print(largest)
"""

# largest = 10

# for x in list :
#     if x > largest :
#         largest = x

# print (largest)


# i = 1
# for k in range (5) :

#     print(k)

# i = 5 

# for i in range (i,20,5) :
#     print(i)





# num = int(input("Enter no of stud = "))


# for i in range(num):

#     list[i] = []
#     name = input("Enter name = ")
#     list.append(name)
#     score = float(input("Enter marks = "))
#     list.append(score)

# main = []

# for i in range() :

#     main.append(list[i])

# print(main)

# num = int(input("Enter number = "))

# sol = lambda num : num + 15

# print(sol(num))

# list = ['sort','me','using','lambda']

# sort = lambda list : list.sort()

# sort(list)

# print (list)

# y = int(input("Enter first operand = "))
# z = int(input("Enter second operand = "))

# class calc :

#     def __init__(self,num1,num2) :

#         self.num1 = int(num1)
#         self.num2 = int(num2)

#     def add(self) :
#         print(f'{self.num1}+{self.num2}={self.num1+self.num2}')

#     def sub(self):
#         print(f'{self.num1}-{self.num2}={self.num1-self.num2}')
    
#     def mult(self):
#         print(f'{self.num1}*{self.num2}={self.num1*self.num2}')

#     def div(self):
#         print(f'{self.num1}/{self.num2}={self.num1/self.num2}')

# calculator = calc(y,z)

# operator = input("Enter operation = ")

# if operator == "+" : 
#     calculator.add()
# elif operator == "-" :
#     calculator.sub()

# elif operator == "*" :
#     calculator.mult()

# elif operator == "/" :
#     calculator.div()

# a = """we can use 3 double inverted commas"""
# print(a)

# a = ["apple",4]

# dict = {}

# dict[a[0]] = a[1]

# print(dict)

# l1 = [3,4,5]
# l2 = [3,4,5]
# a=""
# b=""

# for n in range (0,len(l1)):
#     a = a+f"{l1[n]}"
# for n in range (0,len(l2)):
#     b = b+"{n}"

# # x = int(a)
# # y = int(b)
# print(a)

# s = "   fly me   to   the moon  "
# a = s.strip()
# b = a.split(" ")
# print (a)

# a = 435
# b = str(a)
# list = []
# list.append(int(b[0]))
# print(list)

# for x,y in self.dict.items():
#                 print(f"{x}: {y}")

# for x,z in self.dict2.items():
#                 print(x)
    
#             for y in z :
#                 print(y + ':', z[y])

import tkinter as tk
import datetime

class BikeShowroom:
    def __init__(self):
        self.bike_stock = {
            "Honda Shine": 15,
            "Hero Glamour": 10,
            "KTM 200 Duke": 5,
        }
        self.rentals = {}

    def bikes_available(self):
        available_bikes = "\n".join(f"{bike}: {quantity}" for bike, quantity in self.bike_stock.items()
)
        return f"Available Bikes:\n{available_bikes}"

    def bike_names(self):
        return "\n".join(self.bike_stock.keys())

    def rent_enquiry(self, bike_name):
        if bike_name.lower() == "all":
            rent_info = (
                "Hero Glamour's rent:\n"
                "Daily   =   ₹350\n"
                "Weekly  =   ₹2000\n"
                "Monthly =   ₹6000\n\n"
                "Honda Shine's rent:\n"
                "Daily   =   ₹350\n"
                "Weekly  =   ₹2100\n"
                "Monthly =   ₹6000\n\n"
                "KTM 200 Duke's rent:\n"
                "Daily   =   ₹800\n"
                "Weekly  =   ₹4500\n"
                "Monthly =   ₹12000\n"
            )
        elif bike_name == "Hero Glamour":
            rent_info = (
                "Hero Glamour's rent:\n"
                "Daily   =   ₹350\n"
                "Weekly  =   ₹2000\n"
                "Monthly =   ₹6000\n"
            )
        elif bike_name == "Honda Shine":
            rent_info = (
                "Honda Shine's rent:\n"
                "Daily   =   ₹350\n"
                "Weekly  =   ₹2100\n"
                "Monthly =   ₹6000\n"
            )
        elif bike_name == "KTM 200 Duke":
            rent_info = (
                "KTM 200 Duke's rent:\n"
                "Daily   =   ₹800\n"
                "Weekly  =   ₹4500\n"
                "Monthly =   ₹12000\n"
            )
        else:
            rent_info = "Enter proper bike name.\n"
        return rent_info

    def discount(self):
        return (
            "**** Exclusive Discount ****\n"
            "Flat ₹500 off on total weekly charges of any bike\n"
            "Heavy ₹1000 off on total monthly charges of KTM 200 Duke"
        )

    def rent_bike(self, customer_name, bike_name, quantity):
        if bike_name in self.bike_stock:
            if self.bike_stock[bike_name] >= quantity:
                self.bike_stock[bike_name] -= quantity
                rental_details = {
                    "Name": customer_name,
                    "Bike": bike_name,
                    "Quantity": quantity,
                    "Date & Time": datetime.datetime.now(),
                }
                if customer_name in self.rentals:
                    self.rentals[customer_name].append(rental_details)
                else:
                    self.rentals[customer_name] = [rental_details]
                return (
                    "Bike rented successfully!\n"
                    f"Your details:\n"
                    f"Name: {customer_name}\n"
                    f"Bike: {bike_name}\n"
                    f"Quantity: {quantity}\n"
                    f"Issuing Date & Time: {datetime.datetime.now()}\n"
                )
            else:
                return f"Insufficient stock for {bike_name}.\n"
        else:
            return "Invalid bike name.\n"

    def enquiry(self, customer_name):
        if customer_name in self.rentals:
            rental_records = self.rentals[customer_name]
            enquiry_info = ""
            for record in rental_records:
                rental_time = record["Date & Time"]
                time_diff = datetime.datetime.now() - rental_time
                enquiry_info += (
                    f"Rental details:\n"
                    f"Time since bike issued: {time_diff}\n"
                    f"Bike: {record['Bike']}\n"
                    f"Quantity: {record['Quantity']}\n\n"
                )
            return enquiry_info
        else:
            return "No rental records found for this customer.\n"

    def return_bike(self, customer_name, bike_name, quantity):
        if customer_name in self.rentals:
            rental_records = self.rentals[customer_name]
            for i, record in enumerate(rental_records):
                if record["Bike"] == bike_name:
                    rental_time = record["Date & Time"]
                    time_diff = datetime.datetime.now() - rental_time
                    total_hours = time_diff.total_seconds() / 3600
                    bill = 0
                    if bike_name == "Honda Shine":
                        if total_hours < 24:
                            bill = 350 * quantity
                        elif total_hours > 24 and total_hours < 168:
                            days = total_hours / 24
                            bill = 350 * days * quantity
                        elif total_hours > 168 and total_hours < 720:
                            weeks = total_hours / 168
                            bill = 2100 * weeks * quantity
                            bill -= 500
                        else:
                            months = total_hours / 720
                            bill = 6000 * months * quantity

                    elif bike_name == "Hero Glamour":
                        if total_hours < 24:
                            bill = 350 * quantity
                        elif total_hours > 24 and total_hours < 168:
                            days = total_hours / 24
                            bill = 350 * days * quantity
                        elif total_hours > 168 and total_hours < 720:
                            weeks = total_hours / 168
                            bill = 2000 * weeks * quantity
                            bill -= 500
                        else:
                            months = total_hours / 720
                            bill = 6000 * months * quantity

                    elif bike_name == "KTM 200 Duke":
                        if total_hours < 24:
                            bill = 800 * quantity
                        elif total_hours > 24 and total_hours < 168:
                            days = total_hours / 24
                            bill = 800 * days * quantity
                        elif total_hours > 168 and total_hours < 720:
                            weeks = total_hours / 168
                            bill = 4500 * weeks * quantity
                            bill -= 500
                        else:
                            months = total_hours / 720
                            bill = 12000 * months * quantity
                            bill -= 1000

                    self.bike_stock[bike_name] += quantity
                    del rental_records[i]
                    return f"Bike returned successfully!\nYour bill is: ₹{bill}"
            return "No matching rental found for this customer and bike.\n"
        else:
            return "Customer not found.\n"

class BikeShowroomGUI(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Bike Showroom")
        self.showroom = BikeShowroom()
        self.customer_name = tk.StringVar()

        # Labels and Entry for Customer Name
        tk.Label(self, text="Customer Name:").grid(row=0, column=0, padx=5, pady=5)
        tk.Entry(self, textvariable=self.customer_name).grid(row=0, column=1, padx=5, pady=5)

        # Buttons for Operations
        tk.Button(
            self, text="Check Bike Names", command=self.show_bike_names
        ).grid(row=1, column=0, columnspan=2, pady=5)
        tk.Button(
            self, text="Check Available Bikes", command=self.show_available_bikes
        ).grid(row=2, column=0, columnspan=2, pady=5)
        tk.Button(self, text="Discount Info", command=self.show_discount).grid(
            row=3, column=0, columnspan=2, pady=5
        )
        tk.Button(
            self, text="Rent Enquiry", command=self.show_rent_enquiry
        ).grid(row=4, column=0, columnspan=2, pady=5)
        tk.Button(self, text="Rent Bike", command=self.rent_bike).grid(
            row=5, column=0, columnspan=2, pady=5
        )
        tk.Button(self, text="Enquiry", command=self.enquiry).grid(
            row=6, column=0, columnspan=2, pady=5
        )
        tk.Button(self, text="Return Bike", command=self.return_bike).grid(
            row=7, column=0, columnspan=2, pady=5
        )

        # Text Area to Display Results
        self.result_text = tk.Text(self, wrap=tk.WORD, height=10)
        self.result_text.grid(row=8, column=0, columnspan=2, padx=5, pady=5)

    def show_bike_names(self):
        self.result_text.delete("1.0", tk.END)
        self.result_text.insert(tk.END, self.showroom.bike_names())

    def show_available_bikes(self):
        self.result_text.delete("1.0", tk.END)
        self.result_text.insert(tk.END, self.showroom.bikes_available())

    def show_discount(self):
        self.result_text.delete("1.0", tk.END)
        self.result_text.insert(tk.END, self.showroom.discount())

    def show_rent_enquiry(self):
        def get_rent_enquiry():
            bike_name = self.enquiry_entry.get()
            self.result_text.delete("1.0", tk.END)
            self.result_text.insert(tk.END, self.showroom.rent_enquiry(bike_name))
            self.enquiry_window.destroy()

        self.enquiry_window = tk.Toplevel(self)
        self.enquiry_window.title("Rent Enquiry")
        tk.Label(self.enquiry_window, text="Enter Bike Name:").pack(pady=5)
        self.enquiry_entry = tk.Entry(self.enquiry_window)
        self.enquiry_entry.pack(pady=5)
        tk.Button(self.enquiry_window, text="Get Rent", command=get_rent_enquiry).pack(pady=5)

    def rent_bike(self):
        def get_rent_bike():
            customer_name = self.customer_name.get()
            bike_name = self.bike_entry.get()
            quantity = int(self.quantity_entry.get())
            self.result_text.delete("1.0", tk.END)
            self.result_text.insert(
                tk.END, self.showroom.rent_bike(customer_name, bike_name, quantity)
            )
            self.rent_window.destroy()

        self.rent_window = tk.Toplevel(self)
        self.rent_window.title("Rent Bike")
        tk.Label(self.rent_window, text="Enter Bike Name:").pack(pady=5)
        self.bike_entry = tk.Entry(self.rent_window)
        self.bike_entry.pack(pady=5)
        tk.Label(self.rent_window, text="Enter Quantity:").pack(pady=5)
        self.quantity_entry = tk.Entry(self.rent_window)
        self.quantity_entry.pack(pady=5)
        tk.Button(self.rent_window, text="Rent", command=get_rent_bike).pack(pady=5)

    def enquiry(self):
        customer_name = self.customer_name.get()
        self.result_text.delete("1.0", tk.END)
        self.result_text.insert(tk.END, self.showroom.enquiry(customer_name))

    def return_bike(self):
        def get_return_bike():
            customer_name = self.customer_name.get()
            bike_name = self.bike_entry.get()
            quantity = int(self.quantity_entry.get())
            self.result_text.delete("1.0", tk.END)
            self.result_text.insert(
                tk.END,
                self.showroom.return_bike(customer_name, bike_name, quantity),
            )
            self.return_window.destroy()

        self.return_window = tk.Toplevel(self)
        self.return_window.title("Return Bike")
        tk.Label(self.return_window, text="Enter Bike Name:").pack(pady=5)
        self.bike_entry = tk.Entry(self.return_window)
        self.bike_entry.pack(pady=5)
        tk.Label(self.return_window, text="Enter Quantity:").pack(pady=5)
        self.quantity_entry = tk.Entry(self.return_window)
        self.quantity_entry.pack(pady=5)
        tk.Button(self.return_window, text="Return", command=get_return_bike).pack(pady=5)

if __name__ == "__main__":
    app = BikeShowroomGUI()
    app.mainloop()

from tkinter import *
from customtkinter import *

root = CTk()
root.geometry("500x500")

# user_name = StringVar()

# input1 = CTkEntry(master= root , text = "HIIIIIIIIIIIIIIIII" , font = ('Arial',13), width = 200)
# input1.grid(row = 0 , column= 1, sticky= W , padx = 15, pady = 15)

# b2 = CTkButton(master =root , text = "    Check Bikes Name     ", font = ("Arial", 13), corner_radius= 32 ,
#                 command= input1.delete)
# b2.grid( row = 3, column = 1 , pady = 30, sticky= W )

# root.mainloop(())
