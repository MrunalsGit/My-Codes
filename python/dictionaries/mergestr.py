a = {
    "a" : 1,
    "b" : 2,
    "c" : 3
}

b = {
    "d" : 4,
    "e" : 5,
    "f" : 6
}

for x in b :
    a[x] = b [x]


print(a)