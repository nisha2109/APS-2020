#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[10];
	int res;
	cout<<"Enter the string:";
	cin>>str;
	int n=strlen(str);
	for(int i=0;i<n;i++){
		res=(str[i]-48);
		cout<<res<<endl;}
	cout<<"Integer value:"<<res<<endl;
	return 0;
}
