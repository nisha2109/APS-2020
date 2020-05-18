n=int(input())
arr=list(map(int,input().split()))
v=[0]*1001
count=0
for i in arr:
	v[i]+=1
v=v[::-1]
a=[]
for i in v:
	if i>0:
		count+=i
		a.append(count)
a=a[::-1]
for i in a:
	print(i)

