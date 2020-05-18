t=int(input())
a=[]
for _ in range(t):
	s=0
	N,C=map(int,input().split())
	arr=list(map(int,input().split()))
	if(sum(arr)>C):
		print("No")
	else:
		print("Yes")

