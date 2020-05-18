from itertools import zip_longest
def grouper(iterable,n,fill=None):
	args=[iter(iterable)]*n
	return zip_longest(fillvalue=fill,*args)
def unitgcd(n):
	if n==1:
		print(1)
		print(1,1)
	else:	
		print(n//2)
		l=list(range(1,n+1))
		if n%2==0:
			for a,b in grouper(l,2):
				print(2,a,b)
		else:
			for a,b,c in grouper(l[:3],3):
				print(3,a,b,c)	
			for a,b in grouper(l[3:],2):
				print(2,a,b)
t=int(input())
for _ in range(t):
	n=int(input())
	unitgcd(n)
