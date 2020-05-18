import itertools
from itertools import combinations
n,k=map(int,input().split())
arr=list(map(int,input().split()))
l=list(itertools.combinations(arr,k))
s=[]
for i in l:
	s.append(sum(list(i)))
s1=[]
for i in s:
	if s.count(i)>1:
		s1.append(i)
print(sum(list(set(s)-set(s1))))
