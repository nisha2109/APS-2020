t=int(input())
for _ in range(t):
	a,b,n=map(str,input().split())
	n=int(n)
	arr=[]
	arr.append(a)
	arr.append(b)
	i=2
	while(len(arr[-1])<n):
		arr.append(arr[i-2]+arr[i-1])
		i+=1
	print(arr[-1][n-1])
