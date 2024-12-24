class student :
    def __init__(self,name,marks) :
        self.name = name
        self.marks = marks

    def  score(self) :
        print(f"{self.name} has scored {self.marks} marks! ")


s1 = student ("Raj",78)

s1.score()