n=int(input())
k=int(input())
C=[[0 for a in range(n+1)]for b in range(n+1)]
for i in range(n+1):
	for j in range(min(i,k)+1):
		if j==0 or j==i:
			C[i][j]=1
		else:
			C[i][j]=C[i-1][j-1]+C[i-1][j]
print(C[n][k])
