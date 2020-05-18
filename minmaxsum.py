arr=list(map(int,input().split()))
arr.sort()
m1=sum(arr)-arr[-1]
m2=sum(arr)-arr[0]
print(m1,end=" ")
print(m2)
