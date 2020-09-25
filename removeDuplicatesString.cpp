#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string &str,iny n)
{
	int i,j,index=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(str[i]==str[j])
				break;
		if(j==i)
			str[index++]=str[i];
	}
	return str;
}

int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	int n=sizeof(str)/sizeof(str[0]);
	cout<<"NEW string:"<<removeDuplicates(str,n)<<endl;
	
}
