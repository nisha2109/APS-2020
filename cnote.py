t=int(input())
li=[]
for _ in range(t):
	flag=0
	X,Y,K,N=list(map(int,input().split()))
	for i in range(N):
		n,p=list(map(int,input().split()))
		if (p<=K and n+Y>=X):
			flag=1
	if flag==1:
		print("LuckyChef")
	else:
		print("UnluckyChef")
			
