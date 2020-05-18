while(1):
	n=int(input())
	a,b,c=round(n/2),round(n/3),round(n/4)
	if a+b+c<=n:
		print(n)
	else:
		print(a+b+c)
