s=list(input())
s1=[ord(i) for i in s]
arr=list(s1.count(i) for i in s1)
print(arr)
		
