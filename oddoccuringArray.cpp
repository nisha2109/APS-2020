#include<bits/stdc++.h>
#define N 1000
using namespace std;

int oddOccurence(int arr[],int n)
{
	int intArray[N]={0};
	for(int i=0;i<n;i++)
		intArray[arr[i]]++;
	for(int i=0;i<N;i++)
	{
		if(intArray[i]%2!=0)
			cout<<i<<endl;
	}
}

int main()
{
	int arr[] = { 2, 3, 5, 4, 5, 2,4, 3, 5, 2, 4, 4, 2 }; 
        int n = sizeof(arr) / sizeof(arr[0]); 
  
        // Function calling 
        oddOccurence(arr, n); 
	return 0;
}
