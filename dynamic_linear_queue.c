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
void enqueue()
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
struct node *dequeue()
{
    struct node *temp,*p;
    p=NULL;
    temp=head;
    if(head==NULL)
    return p;
    else
    {
        head=head->next;
        return temp;
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
int main()
{
    head=NULL,prev=NULL;
    struct node *p;
    int ch;
    for(;;)
    {
        printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3>display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:p=dequeue();
            if(p==NULL)
            printf("Queue is empty\n");
            else
            printf("Dequeued element is:%d\n",p->data);
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
