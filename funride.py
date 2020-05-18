import math
def checkAbundantNumber(n):
	s=0
	i=1
	while i<=(math.sqrt(n)):
		if n%i==0:
			if n/i==i:
				s+=i
			else:
				s+=i
				s+=(n/i)
		i+=1
	s-=n
	if(s>n):
		return "YES"
	else:
		return "NO"
N=int(input())
for _ in range(N):
	n=int(input())
	print(checkAbundantNumber(n))
