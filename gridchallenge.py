t=int(input())
a=[]
arr=[[]]
for _ in range(t):
	n=int(input())
	for _ in range(n):
		a=list(map(str,input().split()))
		arr.insert(n,a)
print(arr)	
