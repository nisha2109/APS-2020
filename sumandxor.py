n=int(input())
count=0
while(n):
	if ((n&1)==0):
		count+=1
	n>>=1
print(1<<count)
