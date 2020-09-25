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
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int calculateLength(struct Node* node)
{
	if(node==NULL)
		return 0;
	else
		return 1+calculateLength(node->next);
}

int main()
{
	head=NULL;
	int cnt=0;
	insert(6);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);
	insert(5);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);
	insert(4);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);
	insert(3);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);
	insert(2);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);
	insert(1);
	cnt=calculateLength(head);
	printf("Count:%d\n",cnt);	
	return 0;
}
