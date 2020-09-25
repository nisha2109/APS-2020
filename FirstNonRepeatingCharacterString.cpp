#include<bits/stdc++.h>
#define N 256
using namespace std;

void findFirst(string &str)
{
	int charArray[256]={0};
	int i=0,n=str.length();
	//char ind[n];
	for(i=0;i<n;i++)
	{
		//ind[i]=str[i];
		charArray[str[i]]++;
	}
	for(i=0;i<N;i++)
	{
		if(charArray[i]==1)
		{
			cout<<"First Non-Repeating character:"<<(char)i<<endl;
			break;
		}
	}
}

int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	findFirst(str);
}
