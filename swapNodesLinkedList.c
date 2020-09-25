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

void findandSwap(int x, int y)
{
	struct Node* temp=head;
	struct Node* xcurr,*ycurr,*xprev,*yprev,*tmp;
	if(temp->data==x){
		xprev=NULL;
		xcurr=temp;
	}
	else{
		while(temp->next->data!=x)
			temp=temp->next;
		xprev=temp;
		xcurr=temp->next;
	}
	temp=head;
	if(temp->data==y){
		yprev=NULL;
		ycurr=temp;	
	}
	else{
		while(temp->next->data!=y)
			temp=temp->next;
		yprev=temp;
		ycurr=temp->next;
	}
	if(xcurr==NULL || ycurr==NULL)
		printf("Not found in the list\n");
	if(xprev!=NULL)
		xprev->next=ycurr;
	else
		head=ycurr;
	if(yprev!=NULL)
		yprev->next=xcurr;
	else
		head=xcurr;
	tmp=ycurr->next;
	ycurr->next=xcurr->next;
	xcurr->next=tmp;
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

int main()
{
	head=NULL;
	insert(14);
	insert(20);
	insert(13);
	insert(12);
	insert(15);
	insert(10);
	printf("Linked List:\n");
	display();
	findandSwap(12,13);
	printf("Swapped Linked List:\n");
	display();
	return 0;
}
