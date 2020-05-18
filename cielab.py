n,k=map(int,input().split())
ans=abs(n-k)
l=[int(x) for x in str(ans)]
print(l)
l[1]=9-l[1]
a="".join(map(str,l))
print(a)

