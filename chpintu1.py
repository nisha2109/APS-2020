t=int(input().strip())
minprice=0
for j in range(t):
	n,m=map(int,input().split())
	arr1=list(map(int,input().split()))
	arr2=list(map(int,input().split()))
	if(arr2.count(arr2[0])==len(arr2)):
		print(arr2[0])
	else:
		for i in range(len(arr1)):
			minprice=min(filter(lambda k: k>0,arr2[arr1.index(arr1[i],i)]))
		print(minprice)
