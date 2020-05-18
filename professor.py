t=int(input())
for _ in range(t):
	count=0
	n,k=map(int,input().split())
	arr=list(map(int,input().split()))
	for i in arr:
		if i<=0:
			count+=1
	if count>=k:
		print("NO")
	else:
		print("YES")
