t=int(input())
for _ in range(t):
	n=int(input())
	if n==0:
		print(1)
	elif n==1:
		print(n<<1)
	else:
		a=1
		for i in range(1,n+1):
			if(i%2!=0):
				a*=2
			else:
				a+=1
		print(a)
			
