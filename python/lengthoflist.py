list = ["abc", "xyz", "aba", "1221"]

a = 0

for x in list :
    if len(x)  >= 2 :
        if x[0] == x[len(x) - 1] :

            a += 1


print(a)

