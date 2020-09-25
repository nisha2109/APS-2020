#include<stdio.h>
#include<stdlib.h>
#define N 10

int stack[N];
int top=-1;

void push(int item)
{
	stack[++top]=item;
}
 int pop()
{
	return stack[top--];
}
void printNGE(int arr[],int len)
{
	int i,element,next;
	push(arr[0]);
	for(i=1;i<len;i++)
	{
		next=arr[i];
		if(top!=-1)
		{
			element=pop();
			while(element<next)
			{
				printf("\n%d --->%d",element,next);
				if(top==-1)
					break;
				element=pop();
			}
			if(element>next)
				push(element);	
		}
		push(next);
	}
	while(top!=-1)
	{
		element=pop();
		next=-1;
		printf("\n%d --->%d",element,next);
	}
	
}

int main()
{
	int arr[N];
	int i,len,element,next;
	printf("Enter the length:");
	scanf("%d",&len);
	printf("Enter the elements of the array:");
	for(i=0;i<len;i++)
		scanf("%d",&arr[i]);
	printNGE(arr,len);
	return 0;
}
