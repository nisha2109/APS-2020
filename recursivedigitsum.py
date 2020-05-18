def sum_digits(n):
	if n==0:
		return 0
	if(n%9==0):
		return 9
	else:
		return n%9
n,k=map(int,input().split())
n=str(n)
n=n*k
n=int(n)
res=sum_digits(n)
print(res)
