n,k=map(float,input().split())
if(n%5!=0):
	print('%.2f'%k)
elif(n>k):
	print('%.2f'%k)
else:
	print('%.2f'%(k-n-0.5))

