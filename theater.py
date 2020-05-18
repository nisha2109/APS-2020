from itertools import permutations
t=int(input())
arr=[[0 for i in range(4)] for j in range(4)]
arr1=[]
mon=[]
for _ in range(t):
	n=int(input())
	if(n==0):
		print(-400)
		arr1.append(-400)
	for _ in range(n):
		m,t=list(map(str,input().split()))
		t=int(t)
		if(m=="A" and t==12):
			arr[0][3]+=1
		elif(m=="A" and t==9):
			arr[0][2]+=1
		elif(m=="A" and t==6):
			arr[0][1]+=1
		elif(m=="A" and t==3):
			arr[0][0]+=1
		elif(m=="B" and t==12):
			arr[1][3]+=1
		elif(m=="B" and t==9):
			arr[1][2]+=1
		elif(m=="B" and t==6):
			arr[1][1]+=1
		elif(m=="B" and t==3):
			arr[1][0]+=1
		elif(m=="C" and t==12):
			arr[2][3]+=1
		elif(m=="C" and t==9):
			arr[2][2]+=1
		elif(m=="C" and t==6):
			arr[2][1]+=1
		elif(m=="C" and t==3):
			arr[2][0]+=1
		elif(m=="D" and t==12):
			arr[3][3]+=1
		elif(m=="D" and t==9):
			arr[3][2]+=1
		elif(m=="D" and t==6):
			arr[3][1]+=1
		elif(m=="D" and t==3):
			arr[3][0]+=1
#print(arr)
		l=list(permutations(range(4)))
		l2=[]
		for i in range(len(l)):
			l1=[]
			for j in range(0,len(l[i])):
				l1.append(arr[j][l[i][j]])
			print(arr[j][l[i][j]],end=' ')
			l1.sort(reverse=True)
			s=0
			bal=100	
			for k in l1:
				if k!=0:
					s=s+(bal*k)
					bal=bal-25
				else:
					s=s-100
			l2.append(s)
		arr1.append(max(l2))
	s1=sum(l2)
	mon.append(s1)
for i in mon:
	print(i)
