t=int(input())
for _ in range(t):
	n=int(input())
	arr=list(map(int,input().split()))
	if sum([1 for i in range(n) for j in range(i+1,n) if arr[i]>arr[j]])%2:
		print("NO")
	else:
		print("YES")
	
