n=int(input())
arr=list(map(int,input().split()))
l=list(set(arr))
li=[]
for i in l:
	li.append(arr.count(i)//2)
print(sum(li))
