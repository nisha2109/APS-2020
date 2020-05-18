from random import *
n=int(1e4)
maxv=int(1e5)
mv=int(1e2)
print(n)
for _ in range(n):
	m=randrange(1,mv+1)
	print(m)
	print(" ".join([str(randrange(-maxv,maxv+1)) for _ in range(m)]))
