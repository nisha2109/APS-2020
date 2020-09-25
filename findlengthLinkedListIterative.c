#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
}*head;

struct Node* createNode(int item)
{
	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}

void insert(int item)
{
	struct Node* p=createNode(item);
	if(head==NULL)
		head=p;
	else
	{
		p->next=head;
		head=p;
	}
}

void display()
{
	int count=0;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		count++;
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\nCount:%d\n",count);
}

int findLength()
{
	int count=0;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

int main()
{
	head=NULL;
	insert(6);
	printf("Linked List:\n");
	display();
	insert(5);
	printf("Linked List:\n");
	display();
	insert(4);
	printf("Linked List:\n");
	display();
	insert(3);
	printf("Linked List:\n");
	display();
	insert(2);
	printf("Linked List:\n");
	display();
	insert(1);
	printf("Linked List:\n");
	display();
}
