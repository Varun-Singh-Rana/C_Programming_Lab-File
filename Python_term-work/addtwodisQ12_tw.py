class distance:
    def __init__(self, feet, inch):
        self.feet = feet
        self.inch = inch

    def __add__(self, other):
        feet = self.feet + other.feet
        inch = self.inch + other.inch
        if inch >= 12:
            feet += 1
            inch -= 12
        return distance(feet, inch)

    def __str__(self):
        return f"{self.feet} feet {self.inch} inch"

if __name__ == "__main__":
    d1 = distance(2, 5)
    d2 = distance(3, 6)
    d3 = d1 + d2
    print("Total distance is: ", d3) 