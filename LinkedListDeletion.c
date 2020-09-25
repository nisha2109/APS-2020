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
	{
		head=p;
	}
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

void deleteBeg()
{
	if(head==NULL)
		printf("Linked List Empty\n");
	else
	{
		struct Node* temp=head;
		head=head->next;
		free(temp);
	}
}

void deleteEnd()
{
	if(head==NULL)
		printf("Linked List Empty\n");
	else
	{
		struct Node* temp=head;
		while(temp->next->next!=NULL)
			temp=temp->next;
		temp->next=NULL;
	}
}

void deleteBetween(int key)
{
	struct Node* temp=head;
	if(head->data==key)
		deleteBeg();
	else
	{
		while(temp->next->data!=key)
			temp=temp->next;
		temp->next=temp->next->next;
	}
	
}

int main()
{
	head=NULL;
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	printf("Linked List :\n");
	display();
	deleteBeg();
	printf("Deleted beg\n");
	display();
	deleteEnd();
	printf("Deleted End\n");
	display();
	insert(1);
	insert(5);
	insert(6);
	printf("Linked List\n");
	display();
	deleteBetween(2);
	printf("Deleted Between\n");
	display();
	return 0;
}
