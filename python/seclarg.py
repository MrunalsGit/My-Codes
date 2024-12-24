list = [10,23,30,50,50,4,32,5,7]

new_list = []

for x in list :

    if x not in new_list :

        new_list.append(x)


new_list.sort()

print(new_list[-2])

