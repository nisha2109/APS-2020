t=int(input())
for _ in range(t):
	s=input()
	s1=s[::-1]
	for i in range(1,len(s)):
		a1=abs(ord(s[i])-ord(s[i-1]))
		a2=abs(ord(s1[i])-ord(s1[i-1]))
		if a1!=a2:
			print("Not Funny")
			break
	else:
		print("Not Funny")

