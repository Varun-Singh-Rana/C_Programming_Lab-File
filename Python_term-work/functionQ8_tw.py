def add_no(a,b):
    return a+b
square=lambda x:x**2
def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
if __name__ == "__main__":
    print("Addition int:",add_no(3,4))
    print("Addition float:",add_no(2.52,4.58))
    
    n=3
    print(f"Square of {n} is: ",square(n))
    
    n=5
    print(f"factorial of {n} is: ",fact(n))