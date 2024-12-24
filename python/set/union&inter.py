set1 = {1,2,3,4}
set2 = {3,4,5,6}

union = set()
intersection = set()

union = set(set1)

for x in set2:
    if x not in set1:
        union.add(x)


for x in set1:
    if x in set2:
        intersection.add(x)

print("Union of two sets ...")
print(union)

print("\nIntersection of two sets ...")
print(intersection)