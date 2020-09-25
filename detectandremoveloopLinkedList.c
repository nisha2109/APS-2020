#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head;

struct Node* createNode(int item)
{
	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}

void detectandRemoveLoop()
{
	if(head==NULL || head->next==NULL)
		return;
	struct Node *slow=head,*fast=head;
	slow=slow->next;
	fast=fast->next->next;
	while(slow && fast && fast->next)
	{
		if(slow==fast)
			break;
		slow=slow->next;
		fast=fast->next->next;
	}
	if(slow==fast)
	{
		slow=head;
		while(slow->next!=fast->next)
		{
			slow=slow->next;
			fast=fast->next;
		}
		fast->next=NULL;
	}
}

void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

int main()
{
	head=NULL;
	head=createNode(50);
	head->next=head;
	head->next=createNode(20);
	head->next->next=createNode(15);
	head->next->next->next=createNode(4);
	head->next->next->next->next=createNode(10);
	head->next->next->next->next->next = head->next->next; 
	detectandRemoveLoop(head);
	display();
	return 0;
}
