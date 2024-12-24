a = {}
n = int(input("Enter number of students = "))

for x in range(0,n):
    key = input ("Enter name =  ")
    a[key] = 0

keys = list(a.keys())

for x in range(len(keys)):
    for y in range (x+1 , len(keys)):
        if keys[x] > keys[y]:
            keys[x],keys[y] = keys[y],keys[x]

b = {}
count = 1

for x in keys:
    b[x] = count
    count += 1

print (b)
