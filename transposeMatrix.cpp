#include<bits/stdc++.h>
using namespace std;

void transpose(int arr[3][3],int m)
{
	int b[3][3];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			cout<<b[i][j]<<"\t";
		cout<<endl;
	}
}

int main()
{
	int arr[3][3]={{1,2,3},
			{4,5,6},
			{7,8,9}};
	transpose(arr,3);
}
