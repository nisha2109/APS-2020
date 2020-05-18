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
print(arr[x][y])
