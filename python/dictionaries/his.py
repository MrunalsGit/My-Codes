# sampleDict = {
#     "class": {
#         "student": {
#             "name": "Mike",
#             "marks": {
#                 "physics": 70,
#                 "history": 80
#             }
#  }
# }
# }

# print(sampleDict["class"]["student"]["marks"]["history"])



subject = {
    "physics" : 80,
    "Chemistry" : 30,
    "Maths" : 50,
}

min = subject["physics"]

key = ""

for x in subject :

    if subject[x] < min :

        min = subject[x]
        key = x

print(key)

