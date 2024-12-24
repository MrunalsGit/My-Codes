def prefix(list):

    smallest = list[0]
    for x in list:
        if len(smallest) > len(x):
            smallest = x

    longest_prefix = ""
    for y in range (len(smallest)):
        for x in list :
            if smallest in x :
                if smallest in x :
                    longest_prefix = smallest
            else :
                smallest = smallest[:len(smallest)-1]

    return longest_prefix


n = int(input("Enter number of strings = "))
print("")
list = []
for x in range (n):
    a = input(f"Enter string {x+1} = ")
    list.append(a)

common_prefix = prefix(list)

print("\nLongest common prefix = ", common_prefix)
