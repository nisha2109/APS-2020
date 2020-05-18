n,k=map(int,input().split())
MAX=100000
arr=[]
s=set()
arr.append(2)
s.add(2)
l=2*n+1
arr.append(l)
s.add(l)
for i in range(3,MAX):
	count=0
	for j in range(0,len(arr)):
		if (i - arr[j]) in s and arr[j] != (i - arr[j]): 
			count+=1
		if count>2:
			break
	if count==2:
		arr.append(i)
		s.add(i)
print(arr[k-1])
