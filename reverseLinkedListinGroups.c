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
	struct Node *p=createNode(item);
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

struct Node*reverse(struct Node* node,int k)
{
	struct Node *cur=node,*prev=NULL,*nextnode=NULL;
	int count=0;
	while(cur!=NULL && count<k)
	{
		nextnode=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nextnode;
		count++;
	}
	if(nextnode!=NULL)
	{
		node->next=reverse(nextnode,k);
	}
	return prev;
}

int main()
{
	head=NULL;
	insert(8);
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	printf("Linked List:\n");
	display();
	printf("Reverse Linked List:\n");
	head=reverse(head,5);
	display();
	return 0;
}
