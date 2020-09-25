#include<stdio.h>
#include<stdlib.h>

struct StackNode
{
	int data;
	struct StackNode *next;
}*top;

struct StackNode* createNode(int item)
{
	struct StackNode *p=(struct StackNode*)malloc(sizeof(struct StackNode));
	p->data=item;
	p->next=NULL;
	return p;
}

void push(int item)
{
	struct StackNode *p=createNode(item);
	if(top==NULL)
		top=p;
	else
	{
		p->next=top;
		top=p;
	}
}

void pop()
{
	if(top==NULL)
		printf("Underflow");
	else
	{
		struct StackNode *temp=top;
		top=top->next;
		printf("%d is popped\n",temp->data);
		free(temp);
	}
}

void display()
{
	struct StackNode *temp=top;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	top=NULL;
	push(1);
	printf("stack:\n");
	display();
	push(2);
	printf("stack:\n");
	display();
	push(3);
	printf("stack:\n");
	display();
	push(4);
	printf("stack:\n");
	display();
	pop();
	pop();
	pop();
	pop();
	pop();

	return 0;

}
