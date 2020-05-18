t=int(input())
for _ in range(t):
	a,b,n=map(str,input().split())
	n=int(n)
	c=""
	i=2
	while(len(c)<n):
		c=a+b
		a=b
		b=c
		i+=1
	print(b[n-1])
