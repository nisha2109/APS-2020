import math
t=int(input())
for _ in range(t):
	count=0
	x,k=map(int,input().split())
	while x%2==0:
		count+=1
		x=x//2
	for i in range(3,math.ceil(math.sqrt(x)),2):
		while x%i==0:
			x/=i
			count+=1
	if x>2:
		count+=1
	if count<k:
		print(0)
	else:
		print(1)
