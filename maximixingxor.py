l=int(input())
r=int(input())
arr=0
if(abs(l-r)==1):
	arr=l^r
for i in range(l,r):
	for j in range(l,r):
		arr=max(i^j,arr)
print(arr)	
