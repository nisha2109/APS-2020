s=input()
d={}
for keys in s:
	d[keys]=d.get(keys,0)+1
l=list(d.values())
m=min(l)
Hash = dict() 
for i in l: 
	if i in Hash.keys(): 
            Hash[i] += 1
	else: 
            Hash[i] = 1
max_count = len(l)+1
res = -1
for i in Hash:  
	if (max_count>= Hash[i]):  
            res = i 
            max_count = Hash[i] 
if l.count(l[0])==len(l):
	print("YES")
else:
	a=[x-1 for x in l]
	n=a.count(m)
	if(n==1):
		print("YES")
	elif(l.count(res)==1):
		print("YES")
	else:
		print("NO")

	
