#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
}*head,*last;

struct Node* createNode(int item)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}

void insert(int item)
{
	struct Node* p=createNode(item);
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

void display(struct Node*head)
{
	struct Node *temp=head;
	if(temp!=NULL)
	{
		do{
			printf("%d\t",temp->data);
			temp=temp->next;
		}while(temp!=head);
	}
	printf("\n");	
}

void split()
{
	struct Node *slow=head,*fast=head;
	struct Node* head1,*head2;
	while(fast->next!=head && fast->next->next!=head)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast->next->next==head)
		fast=fast->next;
	head1=head;
	if(head->next!=head)
		head2=slow->next;
	fast->next=head2;
	slow->next=head1;
	printf("split List 1:\n");
	display(head1);
	printf("Split List 2:\n");
	display(head2);
}

int main()
{
	head=NULL,last=NULL;
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	printf("Linked list:\n");
	display(head);
	split();
	return 0;
}
