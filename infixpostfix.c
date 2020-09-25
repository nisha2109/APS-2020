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

int main()
{
	char infix[SIZE],postfix[SIZE],ch,e;
	int i,j;
	push('#');
	printf("Enter the infix expression:");
	scanf("%s",infix);
	i=0,j=0;
	
	while((ch=infix[i++])!='\0')
	{
		if(isalnum(ch) || isdigit(ch))
		{
			postfix[j++]=ch;
		}
		else if(ch=='(')
			push(ch);
		else if(ch==')')
		{
			while(stack[top]!='(')
				postfix[j++]=pop();
			e=pop();
		}
		else
		{
			if(Precedence(stack[top])>=Precedence(ch))
				postfix[j++]=pop();
			push(ch);
		}
	}
	while(stack[top]!='#')
		postfix[j++]=pop();
	postfix[j]='\0';
	printf("Postfix expression:%s\n",postfix);
	return 0;
}

