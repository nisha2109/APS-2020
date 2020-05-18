def sum_digits(n):
	if(n<10):
		return n
	s=0
	while(n>0):
		s+=n%10
		n=int(n/10)
	return sum_digits(s)
n,k=map(int,input().split())
n=str(n)
n=n*k
n=int(n)
res=sum_digits(n)
print(res)
