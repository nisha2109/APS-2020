#include<bits/stdc++.h>
using namespace std;

void SwapIt(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(int arr[],int n)
{
	for(int i=0;i<n/2;i++)
		SwapIt(&arr[i],&arr[n-i-1]);
}
int main()
{
	int arr[10];
	int n,i;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	reverse(arr,n);
	cout<<"Reversed array:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}
