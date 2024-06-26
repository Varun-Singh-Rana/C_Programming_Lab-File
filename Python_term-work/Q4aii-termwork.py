n = int(input("Enter the number of terms: "))
sum = 0
for i in range(1, n+1):
    sum += i ** i
print("The sum of the series is", int(sum))