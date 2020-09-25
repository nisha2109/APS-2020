#include<bits/stdc++.h>
using namespace std;

string wordReverse(string str)
{
	int i=str.length()-1;
	int start,end=i+1;
	string res="";
	while(i>=0)
	{
		if(str[i]==' ')
		{
			start=i+1;
			while(start!=end)
				res+=str[start++];
			res+=' ';
			end=i;
		}
		i--;
	}
	start=0;
	while(start!=end)
		res+=str[start++];
	return res;
}

int main()
{
	string str;
	cout<<"Enter the string:";
	getline(cin,str);
	cout<<wordReverse(str)<<endl;
}
