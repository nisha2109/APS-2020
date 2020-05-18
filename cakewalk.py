n=int(input())
arr=list(map(int,input().split()))
arr.sort(reverse=True)
s=0
for i in range(n):
	s+=((1<<i)*arr[i])
print(s)	
