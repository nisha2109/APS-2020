s1=input()
s2=input()
x=len(s1)
y=len(s2)
arr=[[None]*(y+ 1) for i in range(x + 1)]
for i in range(x+1):
    for j in range(y+1):
        if i==0 or j==0:
            arr[i][j]=0
        elif s1[i-1]==s2[j-1]:
            arr[i][j]=arr[i-1][j-1]+1
        else:
            arr[i][j]=max(arr[i-1][j],arr[i][j-1])
subseq=[]
while x>0 and y>0:
    if s1[x-1]==s2[y-1]:
        subseq.append(s1[x-1])
        x-=1
        y-=1
    elif arr[x-1][y]>arr[x][y-1]:
        x-=1
    else:
        y-=1
for i in range(len(subseq)-1,-1,-1):
	print(subseq[i],end="")
print()
	
