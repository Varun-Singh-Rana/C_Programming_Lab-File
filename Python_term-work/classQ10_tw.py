class room:
    def __init__(self,l,b,h):
        self.l=l
        self.b=b
        self.h=h
    def area(self):
        return 2* (self.l*self.b+self.l*self.h+self.b*self.h)
room1=room(3,4,5)
room2=room(5,6,7)
room3=room(7,8,9)

print("area of room1 is: ",room1.area())
print("area of room2 is: ",room2.area())
print("area of room3 is: ",room3.area())