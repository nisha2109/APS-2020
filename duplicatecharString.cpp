#include<bits/stdc++.h>
#define N 256
using namespace std;

int alphabetArray[N]={0};

void checkDuplicate(char str[])
{
	int n=strlen(str),i;
	char duplicates[N];
	for(i=0;i<n;i++)
		alphabetArray[str[i]]++;
	for(i=0;i<N;i++)
	{
		if(alphabetArray[i]>1)
			cout<<(char)i<<endl;
	}
	
}

/*void printDuplicate(char str[])
{
	int n=strlen(str),i;
	for(i=0;i<N;i++)
	{
		if(alphabetArray[i]>1)
			cout<<(char)i<<endl;
	}
}*/

int main()
{
	char str[100];
	cout<<"Enter the string:";
	cin>>str;
	checkDuplicate(str);
}
