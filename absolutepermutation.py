t=int(input())
for _ in range(t):
	arr=[]
	s=input().split()
	n=int(s[0])
	k=int(s[1])
	for i in range(1,n+1):
		arr.append(i)
	if k==0:
		print(" ".join(str(x) for x in arr))
	else:
		if n%(2*k)==0:
			for j in range(0,n//(2*k)):
				for i in range(1,k+1):
					t=arr[j*2*k+i-1]
					arr[j*2*k+i-1]=arr[j*2*k+i+k-1]
					arr[j*2*k+i+k-1]=t
			print(" ".join(str(x) for x in arr))
		else:
			print(-1)
