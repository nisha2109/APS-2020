t=int(input())
for _ in range(t):
	count=0
	n=int(input())
	print(n)
	print(n-1)
	print(n & n-1)
	while(n!=1):
		count+=1
		if (n and (not(n & (n - 1)))):
			n/=2
		else:
			for i in range(1,n):
				res=1<<i
				if(res>n):
					res>>=1
					break
			n-=res
	if(count%2==0):
		print("Richard")
	else:
		print("Louise")
