s,t=map(int,input().split())
a,b=map(int,input().split())
m,n=map(int,input().split())
m1=list(map(int,input().split()))
n1=list(map(int,input().split()))
count1=0
count2=0
for i in range(m):
	m1[i]+=a
	if(m1[i]>=s):
		count1+=1
for i in range(n):
	n1[i]+=b
	if(n1[i]<=t):
		count2+=1
print(count1)
print(count2)

