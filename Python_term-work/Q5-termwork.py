n=int(input("Enter range of list: "))
l=[]
for i in range(n):
    a=int(input("Enter the number: "))
    l.append(a)
mean=sum(l)/n
l.sort()
if n%2==0:
    median=(l[n//2]+l[n//2-1])/2
else:
    median=l[n//2]
mode=max(set(l),key=l.count)
print("Mean: ",mean)
print("Median: ",median)
print("Mode: ",mode)