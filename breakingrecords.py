n=int(input())
arr=list(map(int,input().split()))
m=float('inf')
a=float('-inf')
b1=[]
b2=[]
for i in range(n):
	m=min(m,arr[i])
	b1.append(m)
	a=max(a,arr[i])
	b2.append(a)
print(len(set(b2))-1,end=" ")
print(len(set(b1))-1)
	
