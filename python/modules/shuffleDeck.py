import random

symbol = ["Diamond", "Clubs", "Spade", "Heart"]
numbers = ["2","3","4","5","6","7","8","9","10","A","King","Queen","Jack"]

deck = []

for x in symbol :
    for y in numbers:
        deck.append([y, "of",  x])

print(deck)

random.shuffle(deck)

print("After shuffling")
print(deck)