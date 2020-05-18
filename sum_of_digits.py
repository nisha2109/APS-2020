t=int(input())
for _ in range(t):
	s=0
	n=int(input())
	while(n!=0):
		s+=int(n%10)
		n/=10
	print(s)
