i,j,k=map(int,input().split())
count=0
for x in range(i,j+1):
	a=str(x)
	b=a[::-1]
	if abs(int(a)-int(b))%k==0:
		count+=1
print(count)
