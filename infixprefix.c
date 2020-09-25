#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top=-1;

void push(char ch)
{
	if(top>=SIZE-1)
		printf("Overflow");
	else
		stack[++top]=ch;
}

char pop()
{
	if(top==-1)
		printf("Underflow");
	else
		return stack[top--];	
}

int Precedence(char ch)
{
	switch(ch)
	{
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 2;
		case '^': return 3;
	}
	return -1;
}

char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}
int main()
{
	char infix[SIZE],prefix[SIZE],*temp,*pre,ch,e;
	int i,j;
	push('#');
	printf("Enter the infix expression:");
	scanf("%s",infix);
	temp=strrev(infix);
	i=0;
	while(temp[i]!='\0')
	{
		if(temp[i]=='(')
			temp[i]=')';
		else if(temp[i]==')')
			temp[i]='(';
		i++;
	}
	i=0,j=0;
	while((ch=temp[i++])!='\0')
	{
		if(isalnum(ch) || isdigit(ch))
			prefix[j++]=ch;
		else if(ch=='(')
			push(ch);
		else if(ch==')')
		{
			while(stack[top]!='(')
				prefix[j++]=pop();
			e=pop();
		}
		else
		{
			if(Precedence(stack[top])>Precedence(ch))
				prefix[j++]=pop();
			push(ch);
		}
	}
	while(stack[top]!='#')
		prefix[j++]=pop();
	prefix[j]='\0';
	pre=strrev(prefix);
	printf("Prefix Expression:%s\n",pre);
	return 0;
}
