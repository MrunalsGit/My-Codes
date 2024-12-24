a = {}

b = int(input("Enter number of key value pair = "))

for x in range (0,b):
    key = input("Enter key = ")
    value = int(input("Enter value = "))
    a[key] = value

print(a)