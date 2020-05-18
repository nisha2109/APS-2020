import math
s=input()
c=s[:]
col=int(math.ceil(len(s)**(0.5)))
row=int(col)-1
if row*col<len(s):
	row=col
arr=[]
for i in range(row):
	arr.append(c[:col])
	c=c[col:]
st=''
for i in range(col):
	for j in range(row):
		if i<len(arr[j]):
			st+=arr[j][i]
	st+=" "
print(st)
