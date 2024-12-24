

class operation:

    def find(self,word,x) :
        list = []
        a =0

        while a < len(word) :

            temp = word[a]
            if x in word[a] :

                list.append(a)
            a += 1
        return list


word = []

b = int(input("Total list element"))
c=0

while c < b :

    print

                