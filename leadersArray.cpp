#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[],int n)
{
	int max=arr[n-1];
	cout<<max<<"\t";
	for(int i=n-2;i>=0;i--)
	{
		if(max<=arr[i])
		{
			max=arr[i];
			cout<<max<<"\t";
		}
	}
	cout<<endl;
}

int main()
{
	int n,i,arr[10];
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	leaders(arr,n);
	return 0;
}
