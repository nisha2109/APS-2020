def kaprekar(num):
	s=str(num**2)
	lower=s[len(s)//2:]
	high='0' if s[:len(s)//2]=='' else s[:len(s)//2]
	if int(lower)+int(high)==num:
		return True
	else:
		return False
p=int(input())
q=int(input())
arr=[]
for i in range(p,q+1):
	if kaprekar(i):
		arr.append(i)
if len(arr)==0:
	print("INVALID RANGE")
else:
	print(" ".join(str(a) for a in arr)) 	
