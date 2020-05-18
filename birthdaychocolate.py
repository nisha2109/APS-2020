n=int(input())
arr=list(map(int,input().split()))
d,m=map(int,input().split())
count=0
#li=[]
s=0
for i in range(n):
	s+=arr[i]
	#li.append(s)
	if(s==d):
		count+=1
		s=0
		continue
print(count)		
