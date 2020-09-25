#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100

int stack[SIZE];
int top=-1;

void push(int ch)
{
	if(top==SIZE-1)
		printf("Overflow\n");
	else
		stack[++top]=ch;
}

int pop()
{
	if(top==-1)
		printf("Underflow\n");
	else
		return (stack[top--]);
}

int main()
{
	char postfix[SIZE],ch;
	int i,op1,op2,num;
	printf("Enter the postfix expression:");
	scanf("%s",postfix);
	i=0;
	while((ch=postfix[i++])!='\0')
	{
		//if(ch==' ')
		//	continue;
		if(isdigit(ch))
		{
			while(isdigit(ch))
			{
				num=num*10+(int)(ch-48);
				i++;
			}
			i--;
			push(num);
		}
		else
		{
			switch(ch)
			{
				case '+' : op2=pop();
					   op1=pop();
					   push((op1+op2));
					   //printf("%d\t%d\n",op1,op2);
					   break;
				case '-' : op2=pop();
					   op1=pop();
					   //printf("%d\t%d\n",op1,op2);
					   push((op1-op2));
					   break;
				case '*' : op2=pop();
					   op1=pop();
					   //printf("%d\t%d\n",op1,op2);
					   push((op1*op2));
					   break;
				case '/' : op2=pop();
					   op1=pop();
					   //printf("%d\t%d\n",op1,op2);
					   push((op1/op2));
					   break;
			}
		}
		//printf("%c\n",stack[top]);
	}
	int res=pop();
	printf("Evaluated result : %d\n",res);
	return 0;
}
