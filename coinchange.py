n,m=map(int,input().split())
arr=list(map(int,input().split()))
c=[0]*(n+1)
c[0]=1
for i in arr:
	for j in range(i,n+1):
		c[j]+=c[j-i]
print(c[n])
