t=int(input())
for _ in range(t):
	x,y,z=map(int,input().split())
	if(abs(z-x) > abs(z-y)):
		print("Cat B")
	elif(abs(z-y) > abs(z-x)):
		print("Cat A")
	else:
		print("Mouse C")		
