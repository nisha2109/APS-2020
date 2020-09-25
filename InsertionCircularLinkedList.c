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
	struct Node *p=createNode(item);
	if(head==NULL || last==NULL)
	{
		head=p;
		last=p;
		head->next=head;
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
	struct Node *p=createNode(item);
	if(head==NULL || last==NULL)
	{
		head=p;
		last=p;
		head->next=head;
	}
	else
	{
		last->next=p;
		p->next=head;
		last=p;
	}
}

void insertBetween(int item,int key)
{
	struct Node *p=createNode(item);
	struct Node* temp=head;
	while(temp->data!=key)
		temp=temp->next;
	p->next=temp->next;
	temp->next=p;
}

void display()
{
	struct Node* temp=head;
	while(temp!=last)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d\t",temp->data);
	printf("\n");
}

int main()
{
	head=NULL,last=NULL;
	insertBeg(2);
	printf("linked List :\n");
	display();
	insertBeg(1);
	printf("linked List :\n");
	display();
	insertEnd(3);
	printf("linked List :\n");
	display();
	insertEnd(4);
	printf("linked List :\n");
	display();
	insertEnd(6);
	printf("linked List :\n");
	display();
	insertBetween(5,4);
	printf("linked List :\n");
	display();
	return 0;
}
