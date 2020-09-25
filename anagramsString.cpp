#include<bits/stdc++.h>
#define N 256
using namespace std;


bool checkAnagram(char *str1,char *str2)
{
	int characterArray[N]={0};
	//int characterArray2[N]={0};
	int i=0;
	for(i=0;str1[i] && str2[i];i++)
	{
		characterArray[str1[i]]++;
		characterArray[str2[i]]--;
	}
	if(str1[i] || str2[i])
		return false;
	for(i=0;i<N;i++)
		if(characterArray[i])
			return false;
	return true;
}

int main()
{
	char str1[100],str2[100];
	cout<<"Enter the string1:";
	cin>>str1;
	cout<<"Enter the string2:";
	cin>>str2;
	if(checkAnagram(str1,str2))
		cout<<"Anagrams"<<endl;
	else
		cout<<"Not Anagrams"<<endl;
	return 0;
}
