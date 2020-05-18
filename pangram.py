s=input()
c=len(set(c.lower() for c in s if c!=' '))
if c==26:
	print("pangram")
else:
	print("not pangram")
