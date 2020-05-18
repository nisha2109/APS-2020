t=int(input())
for _ in range(t):
	l=[]
	n,k,m=map(int,input().split())
	for _ in range(n):
		arr=list(map(int,input().split()))
		l.append(round(sum(arr)/m))
	for i in l:
		print(i,end=" ")
	print()
