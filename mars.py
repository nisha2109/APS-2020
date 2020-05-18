import re
s=input()
count=0
for i in range(len(s)+1):
	if(s[i]=="S"):
		if( s[i+1]=="O"):
			if( s[i+2]=="S"):
				continue
			else:
				count+=1
		else:
			count+=1
	else:
		count+=1
print(count)
