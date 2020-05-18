b,n,m=map(int,input().split())
li1=list(map(int,input().split()))
li2=list(map(int,input().split()))
arr=[]
for i in li1:
	for j in li2:
		if i+j<=b:
			arr.append(i+j)
		else:
			arr.append(-1)
print(max(arr))
				
