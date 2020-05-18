n,k,x=map(int,input().split())
arr=[]
arr.append(0)
arr.append(1)
i=2
while(i<n):
	arr.append((k-2)*arr[i-1]+(k-1)*arr[i-2])
	i+=1
if x==1:
	print((k-1)*arr[n-2])
else:
	print(arr[n-1])
