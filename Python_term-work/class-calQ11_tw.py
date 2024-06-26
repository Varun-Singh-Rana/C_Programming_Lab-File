class cal:
    def __init__(self, x, y):
        self.x = x
        self.y = y
class add(cal):
    def cal(self):
        return self.x + self.y
class dif(cal):
    def cal(self):
        return self.x - self.y
class mul(cal):
    def cal(self):
        return self.x * self.y

if __name__ == "__main__":
    a = 10
    b = 5
    add = add(a, b)
    dif = dif(a, b)
    mul = mul(a, b)
    print("Addition is: ", add.cal())
    print("Difference is: ", dif.cal())
    print("Multiplication is: ", mul.cal())