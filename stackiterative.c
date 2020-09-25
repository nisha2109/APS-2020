#include<stdio.h>
#include<stdlib.h>
#define N 100

int stack[N],top=-1;
void push(int item)
{
	if(top==N-1)
		printf("Overflow");
	else
	{
		stack[++top]=item;
	}
}

int pop()
{
	if(top==-1)
		printf("Underflow");
	else
	{
		return stack[top--];
	}
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
		printf("%d\t",stack[i]);
	printf("\n");
}

int peek()
{
	return stack[top];
}

int main()
{
	push(1);
	printf("Stack:\n");
	display();
	push(2);
	printf("Stack:\n");
	display();
	push(3);
	printf("Stack:\n");
	display();
	push(4);
	printf("Stack:\n");
	display();
	push(5);
	printf("Stack:\n");
	display();
	push(6);
	printf("Stack:\n");
	display();
	int j=pop();
	printf("%d is popped\n",j);
	int k=peek();
	printf("%d is at the top\n",k);
	printf("Stack:\n");
	display();
	return 0;
}
