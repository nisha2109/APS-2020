t=int(input())
for _ in range(t):
	n=int(input())
	if n<38:
		print(n)
	else:
		if ((5-(n%5))%5)< 3:
			print(n+((5-(n%5))%5))
		else:
			print(n)
