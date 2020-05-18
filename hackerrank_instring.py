t=int(input())
for _ in range(t):
	s=input()
	n="hackerrank"
	j=0
	for i in s:
		if i==n[j]:
			j+=1
		if j==len(n):
			break
	if j==len(n):
		print("YES")
	else:
		print("NO")
