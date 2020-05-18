t=int(input())
s1=[]
for _ in range(t):
	s=0
	r=0
	N,K=list(map(int,input().split()))
	arr=list(map(int,input().split()))
	s=sum(arr)
	r=s-((s//K)*K)
	s1.append(r)
for i in s1:
	print(i)
