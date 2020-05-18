n=int(input())
s1=""
s2=""
for _ in range(n):
	s=input()
	for i in range(len(s)):
		if(i%2==0):
			s1=s1+s[i]
		else:
			s2=s2+s[i]
	print(s1,end=" ")
	print(s2)
