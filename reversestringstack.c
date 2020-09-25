#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100

char Stack[N];
int top=-1;

void push(char ch)
{
	if(top==N-1)
		printf("Overflow\n");
	else
		Stack[++top]=ch;
}

char pop()
{
	if(top==-1)
		printf("Underflow");
	else
		return Stack[top--];
}

int main()
{
	char str1[N],str2[N];
	//str1=(char*)malloc(sizeof(char)*100);
	//str2=(char*)malloc(sizeof(char)*100);
	printf("Enter the string to be reserved:");
	scanf("%s",str1);
        int i=0;
	for(i=0;str1[i]!='\0';i++)
		push(str1[i]);
	i=0;
	while(i<strlen(str1)){
		str2[i]=pop();
		i++;}
	printf("%s\n",str2);
			
}
