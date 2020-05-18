def calculatesum(n,d):
	n-=1
	m=(n//d)
	sum=m*(m+1)//2
	return d*sum
def sumMultiple(n):
	return calculatesum(n,3)+calculatesum(n,5)-calculatesum(n,15)	
t=int(input())
for _ in range(t):
	n=int(input())
	print(int(sumMultiple(n)))

	
