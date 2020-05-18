def fraud(n):
	s=0
	for i in range(0,200):
		f=0
		if i in di:
			f=di[i]
		s+=f
		if s>=n:
			return i
n,d=map(int,input().split())
arr=list(map(int,input().split()))
di={}
answer=0
for i in range(n):
	v=arr[i]
	if i>=d:
		m=fraud(d//2+d%2)
		if d%2==0:
			r=fraud(d//2+1)
			if v>=m+r:
				answer+=1
		else:
			if v>=m*2:
				answer+=1
	if v not in di:
		di[v]=0
	di[v]+=1
	if i>=d:
		p=arr[i-d]
		di[p]=di[p]-1
print(answer)
