class rectangle :

    def __init__(self,length,width) :

        self.length = length
        self.width = width

    def area(self) :

        area = self.length*self.width
        return area 
    
    def perimeter(self) :

        peri = 2*(self.length+self.width)
        return peri
    
length = int(input("Enter length = "))
width = int(input("Enter width = "))
    
rect1 = rectangle(length,width)

print(f'Area = {rect1.area()} and perimeter = {rect1.perimeter()}')