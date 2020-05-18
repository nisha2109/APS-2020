#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*prev;
struct node *getnode()
{
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&p->data);
    p->next=NULL;
    return p;
}
void insert()
{
    struct node *p;
    p=getnode();
    if(head==NULL)
    {
        head=p;
        prev=p;
    }
    else
    {
        prev->next=p;
        prev=p;
    }

}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void reverse(struct node **head)
{
    struct node *p,*q,*r;
    p=q=r=*head;
    p=p->next->next;
    q=q->next;
    r->next=NULL;
    q->next=r;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    *head=q;
}
int main()
{
    head=NULL,prev=NULL;

    int ch;
    for(;;)
    {
        printf("Enter your choice\n1.Insert\n2.Reverse\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:reverse(&head);
            break;
            case 3:display();
            printf("\n");
            break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
