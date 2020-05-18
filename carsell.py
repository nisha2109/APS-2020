t=int(input())
for _ in range(t):
	n=int(input())
	l=[0]*n
	arr=list(map(int,input().split()))
	arr.sort(reverse=True)
	for i in range(n):
		a=arr[i]-(arr.index(arr[i],i))
		if(a>0):
			l[i]=a
		else:
			l[i]=0
	s=sum(l)%(1000000007)
	print(s)

