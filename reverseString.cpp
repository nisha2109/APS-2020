#include<bits/stdc++.h>

using namespace std;

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

void reverse(char str[])
{
	int n=strlen(str),i;
	for(i=0;i<n/2;i++)
		swap(&str[i],&str[n-i-1]);
}

int main()
{
	char str[100];
	cout<<"Enter the string to be reversed:";
	cin>>str;
	reverse(str);
	cout<<"Reversed string:"<<str<<endl;
	return 0;
}	
