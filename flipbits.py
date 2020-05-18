t=int(input())
for _ in range(t):
	n=int(input())
	var='{:032b}'.format(n).replace('1','2').replace('0','1').replace('2','0')
	print(int(var))
	
