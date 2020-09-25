#include<bits/stdc++.h>
using namespace std;

bool Isdigit(string &str)
{
	int i=0,n=str.length();
	for(i=0;i<n;i++)
	{
		if(str[i]>='0'&& str[i]<='9')
			continue;
		else
			return false;
	}
	return true;
}

int main()
{
	string str;
	cout<<"Enter the string:";	
	cin>>str;
	if(Isdigit(str))
		cout<<"All digits"<<endl;
	else
		cout<<"No"<<endl;
}
