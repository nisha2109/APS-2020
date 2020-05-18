def root(arr,i):
	while(arr[i]!=i):
		i=arr[i]
	return i
def weighted_union(arr,size,u,v):
	rootu=root(arr,u)
	rootv=root(arr,v)
	if(size[rootu]<size[rootv]):
		arr[rootu]=arr[rootv]
		size[rootu]+=size[rootv]
	else:
		arr[rootv]=arr[rootu]
		size[rootv]+=size[rootu]
def find(arr,u,v):
	if(root(a,u)==root(a,v)):
		return 1
	else:
		return 0
