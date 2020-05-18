from sys import maxsize
def kadane(arr,m):
	maxprev=-maxsize-1
	maxcurr,start,end,s=0,0,0,0
	for i in range(m):
		maxcurr+=arr[i]
		if maxprev<maxcurr:
			maxprev=maxcurr
			start=s
			end=i
		if maxcurr<0:
			maxcurr=0
			s=i+1
	print(maxprev)
	for i in range(start,end+1):
		print(i,end=" ")
	print()
n=int(input())
for _ in range(n):
	m=int(input())
	arr=list(map(int,input().split()))
	kadane(arr,m)
