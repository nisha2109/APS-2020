t=int(input())
for _ in range(t):
	n=int(input())
	count=0
	i=0
	while(n):
		if((n&1)==0):
			count+=1<<i
		i+=1
		n>>=1
	print(count)
		
