def check(a):
	global count
	if(a%4!=2):
		count+=1
t=int(input())
for _ in range(t):
	count=0
	n=int(input())
	arr=list(map(int,input().split()))
	i,temp=1,1
	p=[1 for i in range(n)]
	for i in range(n):
		p[i]=temp
		temp*=arr[i]
	temp=1
	for i in range(n-1,-1,-1):
		p[i]*=temp
		temp*=arr[i]
	arr.extend(p)
	l=list(set(arr))
	print(l)
	for i in l:
		check(i)
	print(count)
