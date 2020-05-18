from itertools import product
def dycksequence(n):
	c={0:['']}
	if n not in c:
		c[n]=['X%sY%s' %t for i in range(1,n+1) for t in product(dycksequence(i-1),dycksequence(n-i))]
	return c[n]
n=int(input())
print(dycksequence(n))
