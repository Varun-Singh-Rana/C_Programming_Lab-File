n = int(input("Enter a number : "))
i = 2
j = 2
print("Prime numbers between 1 to", n, ":")
while i <= n:
    isPrime = True
    while j <= i/2:
        if i % j == 0:
            isPrime = False
        j += 1
    if isPrime == True:
        print(i, end = " ")
    i += 1