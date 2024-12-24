class circle :

    def __init__(self,radius) :

        self.radius = radius

    def periarea(self) :

        area= 2*(22/7)*self.radius
        peri = (22/7)*self.radius*self.radius

        return area,peri


c1 = circle(15)

print(f'Area and perimeter of circle are {c1.periarea()}')