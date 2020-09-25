#include<bits/stdc++.h>
#define N 1000
using namespace std;

int majority(int arr[],int n)
{
	int intArray[N]={0};
	for(int i=0;i<n;i++)
		intArray[arr[i]]++;
	for(int i=0;i<N;i++)
	{
		if(intArray[i]>n/2)
			return i;		
	}
	return -1;
}

int main()
{
	int arr[]={3,3,4,2,4,4,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=majority(arr,n);
	if(i==-1)
		cout<<"No majority"<<endl;
	else
		cout<<i<<endl;
	return 0;
}
