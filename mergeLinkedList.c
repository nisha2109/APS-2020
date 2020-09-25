#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* createNode(int item)
{
	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	p->data=item;
	p->next=NULL;
	return p;
}
struct Node* insert(struct Node* head,int item)
{
	struct Node* p=createNode(item);
	if(head==NULL)
		head=p;
	else
	{
		p->next=head;
		head=p;
	}
	return head;
}

void display(struct Node* head)
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void merge(struct Node* head1,struct Node* head2)
{
	int count=0;
	struct Node *temp1=head1,*temp2=head2,*temp1next,*temp2next;
	if(temp1==NULL)
		display(temp2);
	else if(temp2==NULL)
		display(temp1);
	else if(temp1==NULL && temp2==NULL)
		printf("Both the lists are empty\n");
	else
	{
		while(temp1!=NULL && temp2!=NULL)
		{
			temp1next=temp1->next;
			temp2next=temp2->next;
			temp2->next=temp1next;
			temp1->next=temp2;
			temp1=temp1next;
			temp2=temp2next;	
		}
		head2=temp2;
	}
}

int main()
{
	struct Node *head1=NULL,*head2=NULL;
	head1=insert(head1,5);
	head1=insert(head1,3);
	head1=insert(head1,1);
	head2=insert(head2,6);
	head2=insert(head2,4);
	head2=insert(head2,2);
	printf("Linked list1:\n");
	display(head1);
	printf("Linked List2:\n");
	display(head2);
	merge(head1,head2);
	
	display(head1);
	return 0;
}
