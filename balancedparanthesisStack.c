#include<stdio.h>
#include<stdlib.h>
#define N 100

char stack[N];
int top=-1;

void push(char ch)
{
	if(top==N-1)
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

int main()
{
	char expression[N],ch,e;
	int i=0;
	printf("Enter the expression:");
	scanf("%s",expression);
	while((ch=expression[i++])!='\0')
	{
		if(ch=='[' || ch=='{' || ch=='(')
			push(ch);
		else
		{
			if(ch==']')
			{
				if(stack[top]=='[')
					e=pop();
				else
					continue;
			}
			if(ch=='}')
			{
				if(stack[top]=='{')
					e=pop();
				else
					continue;
			}
			if(ch==')')
			{
				if(stack[top]=='(')
					e=pop();
				else
					continue;
			}
		}
	}
	if(top==-1)
		printf("Balanced\n");
	else
		printf("Not balanced\n");
}
