arr=list(map(int,input().split()))
s=input()
b=list(ord(x)-97 for x in s)
x=[]
for i in range(len(s)):
	x.append(arr[b[i]])
print(max(x)*len(s)*1)
