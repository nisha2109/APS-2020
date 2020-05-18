n,k=map(int,input().split())
arr=list(map(int,input().split()))
if(k>max(arr)):
	print(0)
else:
	print(max(arr)-k)
