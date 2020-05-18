def beargene(s,n):
	minlen=len(s)
	d1={}
	d1['A']=0
	d1['G']=0
	d1['C']=0
	d1['T']=0
	x=n//4
	for i in s:
		d1[i]+=1
	for i in d1:
		d1[i]=max(0,d1[i]-x)
	if d1['A']==0 and d1['G']==0 and d1['C']==0 and d1['T']==0:
		return 0
	d2={}
	d2['A']=0
	d2['G']=0
	d2['C']=0
	d2['T']=0
	t,h=0,0
	while h!=n:
		d2[s[h]]+=1
		if d2['A']>=d1['A'] and d2['G']>=d1['G'] and d2['C']>=d1['C'] and d2['T']>=d1['T']:
			minlen=min(minlen,h-t+1)
			while d2[s[t]]>d1[s[t]]:
				d2[s[t]]-=1
				t+=1
				minlen=min(minlen,h-t+1)
		h+=1
	return minlen
n=int(input())
s=input()
print(beargene(s,n))
