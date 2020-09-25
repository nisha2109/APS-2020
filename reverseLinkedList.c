#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
}*head;

struct Node* createNode(int item)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
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
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void reverse()
{
	struct Node* prev=NULL,*curr=head,*nextnode=NULL;
	while(curr!=NULL)
	{
		nextnode=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextnode;
	}
	head=prev;
}

int main()
{
	head=NULL;
	insert(6);
	//insert(5);
	//insert(4);
	//insert(3);
	//insert(2);
	//insert(1);
	printf("Linked List:\n");
	display();
	reverse();
	printf("Reversed Linked List:\n");
	display();
}
