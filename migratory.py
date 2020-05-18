n=int(input())
arr=list(map(int,input().split()))
res = max(set(arr), key =arr.count)
print(res)
