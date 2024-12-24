a = [1,3,2,1,24,3,5,2,1,6,1]

b = {}

for x in a :
    if x in b :
        b[x] += 1
    else:
        b[x] = 1

print(b)