t=int(input())
for _ in range(t):
	n=int(input())
	arr=list(map(int,input().split()))
	l=[i for i,e in enumerate(arr) if e!=0]
	if len(l)==1:
		print("YES")
	else:
		a=[x-y for y,x in zip(l,l[1:])]
		if(all(x>=6 for x in a)):
			print("YES")
		else:
			print("NO") 

	
