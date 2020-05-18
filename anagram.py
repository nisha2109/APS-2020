t=int(input())
for _ in range(t):
	buff=[0]*26
	s1=input()
	s2=input()
	for i in s1:
		buff[ord(i)-ord('a')]+=1
	for j in s2:
		buff[ord(j)-ord('a')]-=1
	print(sum(map(abs,buff)))
