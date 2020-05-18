t=int(input())
for _ in range(t):
	ch=[]
	n,c=list(map(int,input().split()))
	arr=list(map(int,input().split()))
	for i in arr:
		flag=0
		if(c%i==0):
			flag=1
		else:
			ch.append(i)
	if flag==1:
		print("NO")
	else:
		print("YES")
		u=(c+1)
		for j in ch:
			print((u%j)*j)
		print(u)
