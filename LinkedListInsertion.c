#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head;

struct Node* createNode(int item)
{
	struct Node *p=malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}

void insertBeginning(int item)
{
	struct Node* p;
	if(head==NULL)
	{
		p=createNode(item);
		head=p;
	}
	else
	{
		p=createNode(item);
		p->next=head;
		head=p;
	}
}

void insertEnd(int item)
{
	struct Node* temp=head;
	struct Node* p;
	p=createNode(item);
	if(head==NULL)
	{
		
		head=p;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
}

void insertBetween(int item,int key)
{
	struct Node* temp=head;
	struct Node* p;
	p=createNode(item);
	if(head==NULL)
	{
		
		head=p;
	}
	else
	{
		while(temp->next->data!=key)
			temp=temp->next;
		p->next=temp->next->next;
		temp->next->next=p;
	}
}

void display()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	
	head=NULL;
	printf("Linked List:\n");
	insertBeginning(1);
	//display(head);
	insertEnd(2);
	insertEnd(3);
	insertEnd(5);
	insertBetween(4,3);
	display();
	return 0;
}
