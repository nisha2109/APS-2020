t=int(input())
for _ in range(t):
	n=int(input())
	s=0
	for i in range(1,n):
		if not i%3 or not i%5:
			s+=i
	print(s)	
