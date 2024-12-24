list = [1,2,3,4,5,6,7,8,9]

tuple = ()

for x in list :
    tuple  += (x,)

print("Conversion of list into tuple...")
print (tuple)

tuple2 = (9,8,7,6,5,4,3,2,1)

list2 = []

for x in tuple2 :
    list2.append(x)

print("\nConversion of tuple into list...")
print(list2)