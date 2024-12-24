
list = [2,5,1,2,5,8,4,2,4,7,8,1,9,4]

new = []

dup = []

duplicate = []

for x in list :

    if x not in new :

        new.append(x)

    else :
    
        dup.append(x)

for x in dup :

    if x not in duplicate :

        duplicate.append(x)


print(duplicate)

# method 2 

a = {}