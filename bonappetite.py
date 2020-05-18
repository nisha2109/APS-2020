n,k=map(int,input().split())
arr=list(map(int,input().split()))
b=int(input())
s=(sum(arr)-arr[k])//2
if s==b:
	print("Bon Appetit")
else:
	print(b-s)
