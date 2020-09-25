#include<bits/stdc++.h>
#define N 256
using namespace std;

int countOccurence(string &str,char e)
{
	int charArray[N]={0};
	int i,n=str.length(),ind;
	for(i=0;i<n;i++)
		charArray[str[i]]++;
	for(i=0;i<n;i++)
	{	if(str[i]==e)
		{
			ind=i;
			break;
		}
	}
	return charArray[str[ind]];
}

int main()
{
	string str;
	char ch;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"Enter the character:";
	cin>>ch;
	int cnt=countOccurence(str,ch);
	cout<<"Occurences:"<<cnt<<endl;
	return 0;
}
