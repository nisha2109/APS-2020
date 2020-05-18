n=int(input())
arr=list(map(int,input().split()))
arr.sort()
difference=float('inf')
for i in range(n-1):
	if arr[i+1]-arr[i]<difference:
		difference=arr[i+1]-arr[i]
print(difference)
