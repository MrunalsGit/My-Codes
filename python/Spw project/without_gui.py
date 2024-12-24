import datetime

class bike_showroom :

    def __init__ (self) :

        self.dict = {
            "Honda Shine" : 15,
            "Hero Glamour" : 10,
            "KTM 200 Duke" : 5,
        }
        self.name = input("Enter your name = ")
        self.a = 0
        self.dict2 = {}

    def bikes_available(self) :

        print ('Available bikes :- \n')

        for x,y in self.dict.items() :
                print(f"{x} : {y}")

    def bike_names(self):
         
        print ("Names of all bikes\n")

        list = self.dict.keys()

        for x in list :
            print (x)

    def rent_enquiry(self) :
        product_name = input("Enter bikes name you want to know rent of or type all to know rent of all bikes = \n")
        if product_name == "Hero Glamour" :
            print("Hero Glamour's rent \n"
                  "Daily   =   ₹350\n"
                  "Weekly  =   ₹2000\n"
                  "Monthly =   ₹6000\n")
            
        elif product_name == "Honda Shine" :
            print("Honda Shine's rent \n"
                  "Daily   =   ₹350\n"
                  "Weekly  =   ₹2100\n"
                  "Monthly =   ₹6000\n")
            
        elif product_name == "KTM 200 Duke" :
            print("KTM 200 Duke's rent \n"
                  "Daily   =   ₹800\n"
                  "Weekly  =   ₹4500\n"
                  "Monthly =   ₹12000\n")
            
        elif product_name == "All" or product_name == "all" :
             
             print("Hero Glamour's rent \n"
                  "Daily   =   ₹350\n"
                  "Weekly  =   ₹2000\n"
                  "Monthly =   ₹6000\n\n"
                  
                  "Honda Shine's rent \n"
                  "Daily   =   ₹350\n"
                  "Weekly  =   ₹2100\n"
                  "Monthly =   ₹6000\n\n"

                  "KTM 200 Duke's rent \n"
                  "Daily   =   ₹800\n"
                  "Weekly  =   ₹4500\n"
                  "Monthly =   ₹12000\n\n"
                  )
            
        else :
            print("Enter proper name \n")

    def discount(self) :
         
         print("**** Exclusive Discount ****\n"
               "Flat ₹500 off on total weekly charges of any bike\n"
               "Heavy ₹1000 off on total monthly charges of KTM 200 Duke"
               )

class customer(bike_showroom) :

    def rent_bike(self) :
        print ("Renting bike.....\n")
        temp  = input("Enter name of bike you want to rent = ")
        time  = datetime.datetime.now()

        if temp == "Hero Glamour" :
            bike = "Hero Glamour"
        elif temp == "Honda Shine" :
            bike = "Honda Shine"
        elif temp == "KTM 200 Duke" :
            bike = "KTM 200 Duke"
        else :
            print("Enter proper bike's name")
            self.a += 1

        if self.a == 0 :
            quant = int(input("Enter number of bikes you want = "))
            time = datetime.datetime.now()
            avai = self.dict[temp]
            rem = avai - quant

            # if rem < 0 :
            #     print("Bike not available")
            #     self.a += 1
            if rem < 0 :
                print("Bike not available in this much quantity")
                self.a += 1
            else :
                self.dict[temp] -= quant
        
        if self.a == 0 :
            print( "Your details are \n"
                    f"Name                   = {self.name}\n"
                    f"Rent Bike              = {bike}\n"
                    f"Number of bikes issued = {quant}\n"
                    f"Issuing date and time  = {time}\n")
            
            self.dict2[self.name] = {}
            self.dict2[self.name]["Name"] = self.name
            self.dict2[self.name]["Bike"] = bike
            self.dict2[self.name]["Quantity"] = quant
            self.dict2[self.name]["Date & Time"] = time
            
    def enquiry(self) :
        print("Enquiry regarding rent bike....\n")
        quant = self.dict2[self.name]["Quantity"]
        bike = self.dict2[self.name]["Bike"]
        issue_time = self.dict2[self.name]["Date & Time"]
        temp = input("Enter your registered name = ")
        current_time = datetime.datetime.now()
        final = current_time - issue_time
        
        if temp in self.dict2.keys() :
            print ("Your details\n"
                   f'Total time since issued bike = {final}\n'
                   f'You have issued {quant} {bike} bike/s\n')
        
    def return_bike(self) :

        print("Returning ..... \n")

        temp = input("Enter your registered name = ")
        quant = self.dict2[temp]["Quantity"]
        bike = self.dict2[temp]["Bike"]
        issue_time = self.dict2[temp]["Date & Time"]
        current_time = datetime.datetime.now()
        final = (current_time - issue_time)
        total_hours = final.total_seconds() / 3600

        if bike == "Honda Shine" :
            if total_hours < 24 :
                    print(f"Your Bill is ₹{350*quant}")
            elif total_hours > 24 and total_hours < 168:
                    days = total_hours/ 24
                    print (f'Your Bill = ₹{350*days*quant}')
            elif total_hours > 168 and total_hours < 720 :
                    weeks = total_hours / 168
                    print (f'Your Bill = ₹{2100*weeks*quant}'
                           f"Applying exclusive discount Final Bill = {(2100*weeks*quant)-500}")
            else :
                    months = total_hours / 720
                    print (f"Your Bill = ₹{6000*months*quant}")
            
        elif bike == "Hero Glamour" :
            if total_hours < 24 :
                    print(f"Your Bill is ₹{350*quant}")
            elif total_hours > 24 and total_hours < 168:
                    days = total_hours/ 24
                    print (f'Your Bill = ₹{350*days*quant}')
            elif total_hours > 168 and total_hours < 720 :
                    weeks = total_hours / 168
                    print (f'Your Bill = ₹{2000*weeks*quant}'
                           f"Applying exclusive discount Final Bill = {(2000*weeks*quant)-500}")
            else :
                    months = total_hours / 720
                    print (f"Your Bill = ₹{6000*months*quant}")

        elif bike == "KTM 200 Duke" :
            if total_hours < 24 :
                    print(f"Your Bill is ₹{800*quant}")
            elif total_hours > 24 and total_hours < 168:
                    days = total_hours/ 24
                    print (f'Your Bill = ₹{800*days*quant}')
            elif total_hours > 168 and total_hours < 720 :
                    weeks = total_hours / 168
                    print (f'Your Bill = ₹{4500*weeks*quant}'
                           f"Applying exclusive discount Final Bill = {(4500*weeks*quant)-500}")
            else :
                    months = total_hours / 720
                    print (f"Your Bill = ₹{12000*months*quant}"
                           f"Applying exclusive  discount Final Bill = {(12000*weeks*quant)-1000}")

        self.dict[bike] += quant


c1 = customer()
num = int(input("Enter number of operations = "))
n = 0

while n < num :
     
    oper = int(input("Enter sequence number of operation you want to perform\n\n"
                  "1] Check bikes names \n" -
                  "2] Check available bikes\n" -
                  "3] Check ongoing discount\n" -
                  "4] Rent enquiry\n" -
                  "5] Rent a bike\n"
                  "6] Enquiry about rented bike\n"
                  "7] Return bike\n\n"))
     
    if oper == 1 :
        c1.bike_names()

    elif oper == 2 :
         c1.bikes_available()

    elif oper == 3 :
         c1.discount()

    elif oper == 4 :
         c1.rent_enquiry()

    elif oper == 5 :
         c1.rent_bike()

    elif oper == 6 :
         c1.enquiry()

    elif oper == 7 :
         c1.return_bike()

    else:
         print("Enter proper operation number = \n")

    n += 1
