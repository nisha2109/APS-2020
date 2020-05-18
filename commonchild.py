s1=input()
s2=input()
m=len(s1)
n=len(s2)
arr=[[0 for i in range(n+1)] for j in range(2)]
b=bool
for i in range(m):
	b=i&1
	for j in range(n+1):
		if i==0 or j==0:
			arr[b][j]=0
		elif s1[i]==s2[j-1]:
			arr[b][j]=arr[1-b][j-1]+1
		else:
			arr[b][j]=max(arr[1-b][j],arr[b][j-1])
print(arr[b][n])
