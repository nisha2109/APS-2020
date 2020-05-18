t=int(input())
l=[]
arr1=[]
arr2=[]
for _ in range(t):
	n,k=map(int,input().split())
	l1=[int(x) for x in str(n)]
	l2=[int(x) for x in str(k)]
	for i in l1:
		for j in l2:
			arr1.append(j*10+i)
		arr2.append(i*10+j)
	print(arr1)
	print(arr2)
			
