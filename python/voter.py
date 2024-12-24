voters = {
    "Chandrashekhar": 17,
    "Glenn": 20,
    "Maxwell": 21,
    "Kunal": 20,
    "Chaitanya": 21,
    "Vedant": 15,
    "Mrunal": 16,
    "Aditya": 50
}

for x in voters :

    if x == "Glenn" or x == "Maxwell" :

        continue

    elif voters[x] >= 18 :

        print(x)