n=int(input())
arr=list(map(int,input().split()))
l=[]
for i in range(n):
	l.append([arr[i],i])
l=l.sort()
count=-1
for i in range(n):
	if(l[i][1]==i):
		continue
	else:
		l[i][0]=\l[l[i][1]][1]
		l[l[i][1]][1]=\l[i][0]
		l[i][1]=\l[l[i][1]][1]
		l[l[i][1]][1]=\l[i][1]
	if i!=l[i][1]:
		i-=1
	count+=1
print(count)
