t1,t2,n=map(int,input().split())
l=[0]*(n+1)
l[0]=t1
l[1]=t2
for i in range(2,n+1):
	l[i]=l[i-2]+(l[i-1]**2)
print(l[n-1])
