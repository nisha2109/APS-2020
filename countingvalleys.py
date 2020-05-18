n=int(input())
s=input()
h,prev=0,0
count=0
for i in range(n):
	if s[i]=="U":
		h+=1
	elif s[i]=="D":
		h-=1
	if h==0 and prev<0:
		count+=1
	prev=h
print(count)
