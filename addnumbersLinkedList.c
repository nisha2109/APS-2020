#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
};

struct Node* createNode(int item)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node*));
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

void add(struct Node *head1,struct Node * head2)
{
	struct Node *temp1=head1,*temp2=head2,*res=NULL;
	while(temp1 || temp2)
	{
		int sum=0;
		if(temp1==NULL)
			temp1->data=0;
		if(temp2==NULL)
			temp2->data=0;
		sum=temp1->data+temp2->data;
		if(sum>10)
			temp1->next->data=temp1->next->data+1;
		res=insert(res,sum%10);
		temp1=temp1->next;
		temp2=temp2->next;
		printf("%d",res->data);
	}
	printf("Added list:\n");
	display(res);
	
	
}

int main()
{
	struct Node* head1=NULL;
	struct Node* head2=NULL;
	struct Node* res=NULL;
	head1=insert(head1,6);
	head1=insert(head1,4);
	head1=insert(head1,9);
	head1=insert(head1,5);
	head1=insert(head1,7);
	printf("List1:\n");
	display(head1);
	//head2=insert(head2,2);
	head2=insert(head2,4);
	head2=insert(head2,8);
	printf("List2:\n");
	display(head2);
	add(head1,head2);
	return 0;
}
