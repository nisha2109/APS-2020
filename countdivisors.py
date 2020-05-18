from itertools import groupby
def sieve(n,prime,primesq,a):
	for i in range(2,n+1):
		prime[i]=True
	for i in range((n*n+1)+1):
		primesq[i]=False
	prime[1]=False
	p=2
	while(p*p<=n):
		if(prime[p]==True):
			i=p*2
			while(i<=n):
				prime[i]=False
				i+=p
		p+=1
	j=0
	for p in range(2,n+1):
		if(prime[p]==True):
			a[j]=p
			primesq[p*p]=True
			j+=1
def countDivisors(n):
	if(n==1):
		return 1
	prime=[False]*(n+2)
	primesq=[False]*(n*n+2)
	a=[0]*n
	sieve(n,prime,primesq,a)
	cnt=1
	i=0
	while(1):
		if(a[i]*a[i]*a[i]>n):
			break
		ct=1
		while(n%a[i]==0):
			n/=a[i]
			ct+=1
		cnt*=ct
		i+=1
	n=int(n)
	if(prime[n]==True):
		cnt*=2
	elif(primesq[n]==True):
		cnt*=3
	elif(n!=1):
		cnt*=4
	return cnt
t=int(input())
for _ in range(t):
	n=int(input())
	arr=[]
	for i in range(2,n+1):
		arr.append(countDivisors(i))
	#print(arr)
	l=[sum(1 for _ in group) for _,group in groupby(arr)]
	s=l.count(2)+(2*l.count(3))
	print(s)
	#l=len(arr)-len(set(arr))
	#print(l)
