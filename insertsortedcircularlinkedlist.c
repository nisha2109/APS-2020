#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head,*last;

struct Node* createNode(int item)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}

void insertBeg(int item)
{
	struct Node* p=createNode(item);
	if(head==NULL || last==NULL)
	{
		head=p;
		last=p;
		head->next=p;
	}
	else
	{
		p->next=head;
		last->next=p;
		head=p;
	}
}

void insertEnd(int item)
{
	struct Node* p=createNode(item);
	if(head==NULL || last==NULL)
	{
		head=p;
		last=p;
		head->next=p;
	}
	else
	{
		last->next=p;
		p->next=head;
		last=head;
	}
}

void insertBetween(int item,int key)
{
	struct Node *p=createNode(item);
	struct Node *temp=head;
	while(temp->data!=key)
		temp=temp->next;
	p->next=temp->next;
	temp->next=p;
	
}

void compare(int item)
{
	struct Node *temp=head;
	if(item<head->data)
		insertBeg(item);
	else if(item>last->data)
		insertEnd(item);
	else
	{
		while(item>temp->next->data)
			temp=temp->next;
		insertBetween(item,temp->data);
	}
}

void display()
{
	struct Node* temp=head;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("\n");
}

int main()
{
	head=NULL,last=NULL;
	int item;
	insertBeg(11);
	insertBeg(9);
	insertBeg(7);
	insertBeg(3);
	printf("Linked List:\n");
	display();
	for(;;)
	{
		printf("enter the number to be inserted:\n");
		scanf("%d",&item);
		compare(item);
		printf("linked List:\n");
		display();
	}
	return 0;
}
