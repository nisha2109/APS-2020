t=int(input())
for _ in range(t):
	count=0
	n=int(input())
	l=list(map(int,str(n)))
	for i in l:
		try:
			if n%i==0:
				count+=1
		except:
			continue
	print(count)
