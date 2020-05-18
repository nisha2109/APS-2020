import bisect
n=int(input())
scores=list(map(int,input().split()))
k=int(input())
arr=list(map(int,input().split()))
for i in arr:
	scores.append(i)
	l=list(set(scores))
	l.sort(reverse=True)
	print(l.index(i)+1)
