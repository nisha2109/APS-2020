#include<bits/stdc++.h>
using namespace std;

void removeChar(string &str,char ch)
{
	int i,n=str.length(),k=0;
	string temp;
	for(i=0;i<n;i++)
	{
		if(str[i]==ch)
			continue;
		temp[k++]=str[i];
		cout<<str[i];
	}
	cout<<endl;
}

int main()
{
	string str;
	char ch;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"Enter the character to be deleted:";
	cin>>ch;
	removeChar(str,ch);
}
