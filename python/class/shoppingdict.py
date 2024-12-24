class shoppingcart :

    def __init__(self) :
        self.dict = {}

    def add_item(self,name_quant) :

        items = self.dict.keys()

        if name_quant[0] in items :

            self.dict[name_quant[0]]  += name_quant[1]

        else :

            self.dict[name_quant[0]] = name_quant[1]
        

    def remove_item(self,name_quant) :

        items = self.dict.keys()

        if name_quant[0] in items :

            self.dict[name_quant[0]] -= name_quant[1]

        else :

            print('Cart is empty')
        


    def item_quant(self,name_quant) :

        print(f'Quantity of {name_quant[0]} is {self.dict.get(name_quant[0])}')

    def final_cart(self) :
        
        print(f'Your cart is as follows \n {self.dict} ')


customer1 = shoppingcart()

n = int(input("Enter no. of oper = "))

num = 0

options = ("  Inputs              Actions\n"
           "add item quant    = to add item\n"
           "remove item quant = to remove item\n"
           "quantity item     = to know quantity of particular item\n"
           "show              = to print whole cart\n")

print(options)

while num < n :
    
    operation = input("Enter item oper = ")
    list = operation.split(" ")
    name_quant = []

    if list[0] == "add" :
        name_quant.append(list[1])
        name_quant.append(int(list[2]))
        customer1.add_item(name_quant)

    elif list[0] == "remove" :
        name_quant.append(list[1])
        name_quant.append(int(list[2]))
        customer1.remove_item(name_quant)

    elif list[0] == 'quantity' :
        name_quant.append(list[1])
        customer1.item_quant(name_quant)

    else :
        customer1.final_cart()

    
 
    num += 1