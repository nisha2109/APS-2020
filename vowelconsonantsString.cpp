#include<bits/stdc++.h>
using namespace std;

int countVowels(string &str)
{
	int i=0,n=str.length(),count=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
			count++;
	}
	return count;	
}

int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	int cnt=countVowels(str);
	int n=str.length();
	cout<<"Vowels :"<<cnt<<"\t"<<"Consonants:"<<n-cnt<<endl;
}
