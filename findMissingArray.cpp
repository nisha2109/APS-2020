#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[],int n)
{
	int totalsum=((n+1)*(n+2))/2;
	for(int i=0;i<n;i++)
		totalsum-=arr[i];
	std::cout<<totalsum<<endl;
}

int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
    return 0;
}
