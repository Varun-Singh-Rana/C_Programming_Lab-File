n = int(input("Enter a number : "))
sum = 0
fact = 1
for i in range(1, n+1):
    fact = fact * i
    sum += 1/fact
print("The sum of the series is :", sum)