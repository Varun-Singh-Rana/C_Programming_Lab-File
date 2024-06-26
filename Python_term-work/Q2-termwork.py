a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
if a > b and a > c:
    a,c=c,a
elif b > a and b > c:
    b,c=c,b
elif c>a and c>b:
    if a>b:
        a,b=b,a
print(f"The greatest number is: {c}")
print(f"The numbers in ascending order are: {a}, {b}, {c}")