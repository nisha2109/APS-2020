#include<bits/stdc++.h>
#define N 256
using namespace std;

int charArray[N]={0};
void maxOccuring()
{
	int i,max=0,ind;
	for(i=0;i<N;i++)
	{
		if(max<charArray[i])
		{
			max=charArray[i];
			ind=i;
		}
	}
	cout<<(char)ind<<endl;
}

void countOccurence(string &str)
{
	int i,n=str.length();
	for(i=0;i<n;i++)
		charArray[str[i]]++;
	maxOccuring();
}

int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"Max occuring character is:";
	countOccurence(str);
	
}
