def matchSubarray(arr,pat,x,y,pat1,pat2):
	for i in range(pat1):
		for j in range(pat2):
			if arr[i+y][j+x] != pat[i][j]:
				return False
	return True
def match(arr,pattern,arr1,arr2,pat1,pat2):
	for i in range(arr1-pat1+1):
		for j in range(arr2-pat2+1):
			if matchSubarray(arr,pattern,j,i,pat1,pat2):
				return True
	return False
t=int(input())
for _ in range(t):
	arr1,arr2=map(int,input().split())
	arr=[0]*arr1
	for i in range(arr1):
		arr[i]=list(input())
	pattern1,pattern2=map(int,input().split())
	pattern=[0]*pattern1
	for i in range(pattern1):
		pattern[i]=list(input())
	if match(arr,pattern,arr1,arr2,pattern1,pattern2):
		print("YES")
	else:
		print("NO")
