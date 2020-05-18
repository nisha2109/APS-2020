def count_set_bits(n):
	c=0
	while(n!=0):
		c+=n&1
		n>>=1
	return c			
cost=[[3,2,7],[5,1,3],[2,7,2]]
dp=[]
for i in range(2**3):
	dp.append(float("inf"))
dp[0]=0
for mask in range(2**3):
	x=count_set_bits(mask)
	for j in range(3):
		if(mask &(1<<j)):
			continue
		else:
			dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+cost[x][j])
print(dp[(2**3)-1])
	
