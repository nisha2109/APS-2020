def evenfibsum(n):
	if(n<2):
		return 0
	f1=0
	f2=2
	sum=f1+f2
	while(f2<n):
		f3=(4*f2)+f1
		if(f3>n):
			break
		f1=f2
		f2=f3
		sum+=f2
	return sum
t=int(input())
for _ in range(t):
	n=int(input())
	print(evenfibsum(n))
