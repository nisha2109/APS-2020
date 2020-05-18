from itertools import permutations
t=int(input())
arr=[]
arr1=[]
for _ in range(t):
	n=int(input())
	s=[]
	li=list(map(int,input().split()))
	li.sort()
	li1=list(map(int,input().split()))
	li1.sort()
	if (li.count(li[0]) == len(li) and li1.count(li1[0]) == len(li1)):
		if(li[0]<=li1[0]):
			arr.append(li[0]*n)
		else:
			arr.append(li1[0]*n)
	else:
		for i in range(len(li)+1):
			if(li[i-1]<=li1[i-1]):
				s.append(li[i-1])	
			else:
				s.append(li1[i-1])
		s=set(s)
		s1=sum(s)
		arr.append(s1)
for i in arr:
	print(i)
