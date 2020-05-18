t=int(input())
arr=[""]*1000000
for i in range(t):
	s=input().split(' ')
	a=int(s[0])
	s=s[1]
	if(i<t//2):
		arr[a]+="- "
	else:
		arr[a]+=s+" "
for i in range(t):
	print(arr[i],end="")
print()	
