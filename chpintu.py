t=int(input())
for _ in range(t):
	n,m=map(int,input().split())
	minprice=[]
	arr1=list(map(int,input().split()))
	arr2=list(map(int,input().split()))
	li=list(dict.fromkeys(arr1).keys())
	for i in range(len(li)):
		cost=0
		for j in range(len(arr1)):
			if (li[i]==arr1[j]):
				cost+=arr2[j]
		minprice.append(cost)
	print(min(minprice))
