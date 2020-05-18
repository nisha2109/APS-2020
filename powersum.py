from math import pow,floor
res=0
def recurse(num,x,k,n):
	global res
	if x==0:
		res+=1
	r=floor(pow(num,(1/n)))
	for i in range(k+1,r+1):
		a=x-int(pow(i,n))
		if(a>=0):
			recurse(num,x-int(pow(i,n)),i,n)
	return res
def check(x,n):
	return recurse(x,x,0,n)
num=int(input())
n=int(input())
print(check(num,n))
