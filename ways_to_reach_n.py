n=int(input())
result=[0]*(n+1)
result[0]=1
for i in range(3,n+1):
	result[i]=result[i]+result[i-3]
for i in range(5,n+1):
	
	result[i]=result[i]+result[i-5]
for i in range(10,n+1):
	result[i]=result[i]+result[i-10]
print(result[n])
#print(result)
