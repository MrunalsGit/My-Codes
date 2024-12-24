class ShoppingCart:
    def _init_(self):
        self.list = []

    def add_item(self, product_name):
        present = False
        for product in self.list:
            if product[0] == product_name[0]:
                present = True
                product[1] += 1
            
        if present == False:
             self.list.append(product_name)       
    
    def remove_item(self, product_name):
        if len(self.list) == 0:
            print("Cart is empty")
        else:
            index = 0 

            for product in self.list:      #["apple", 12]
                if product[0] == product_name[0]:
                    pr_list = list(product)
                    pr_list[1] -= product_name[1]
                    pr_tuple = list(pr_list)
                    self.list[index] = pr_tuple
                index += 1
            
            if(len(self.list) == index):
                print("Product not found")

    def get_items(self):
        print("Cart: ", self.list)

    def get_quantity(self, product_name):
        for product in self.list:
            if product[0] == product_name:
                print(f"Quantity: of {product[0]} is {product[1]}" )


cart = ShoppingCart()

n = int(input("Enter number of operation you want to perform: "))

num = 0


#  [("apple", 2), ("banana", 4), ("Grapes", 3), ("Orange", 5), ("Pineapple", 6)]


# 9
# add apple 2
# add mango 8
# add banana 4
# remove mango 4
# get 
# add grapes 3
# remove mango 4
# getquantity banana
# get

while num < n:
    operation = input("Please enter a command: ")

    command = operation.split(' ')
    print(command)
    if command[0] == 'add':
        product = (command[1], int(command[2]))
        cart.add_item(product)
    elif command[0] == 'remove':
        product = (command[1], int(command[2]))
        cart.remove_item(product)
    elif command[0] == 'get':
        cart.get_items()
    else:
        cart.get_quantity(command[1])

    num += 1