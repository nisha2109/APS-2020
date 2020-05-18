n=int(input())
res,c=0,0
d,k=1,2
for i in range(2,n+1):
	tmp=d
	if(i%3==0):
		c=2*(i/3)
	else:
		c=1
	d=k
	k=c*d+tmp
print(k)
