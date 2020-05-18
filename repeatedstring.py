s=input()
n=int(input())
repstr=n//len(s)
r=n%len(s)
count,cnt=0,0
for i in range(len(s)):
	if s[i]=='a':
		count+=1
	if s[i]=='a' and i<r:
		cnt+=1
final=count*repstr+cnt
print(final)
