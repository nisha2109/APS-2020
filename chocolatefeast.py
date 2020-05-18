t=int(input())
for _ in range(t):
	n,c,m=map(int,input().split())
	chocolate=n//c
	wrap=chocolate
	while wrap>=m:
		chocolate+=wrap//m
		wrap=wrap//m+wrap%m
	print(chocolate)
