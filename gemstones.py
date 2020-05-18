t=int(input())
a=set(input())
for _ in range(t-1):
	a&=set(input())
print(len(a))
	
