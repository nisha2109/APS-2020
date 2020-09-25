#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str)
{
	string temp=str;
	int i,n=str.length();
	for(i=0;i<=n/2;i++)
	{
		swap(temp[i],temp[n-i-1]);
	}
	if(temp==str)
		return true;
	else
		return false;
}

int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	if(isPalindrome(str))
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
	return 0;
}
