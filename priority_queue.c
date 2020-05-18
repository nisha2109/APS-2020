#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int priority[10];
    struct node *next;
}*front,*end;
struct node *getnode()
{
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&p->data);
    printf("Enter the priority\n");
    scanf("%d",&p->priority);
    p->next=NULL;
    return p;
}
void enqueue(int val)
{
    check();
     if(front==NULL && end==NULL)
    {
        front=val;
        end=val;
    }
    else
    {

        end->next=val;
        end=val;
    }
}
void check()
{

    int i, a[10];
    struct node *temp;
    temp=front;
    while(temp!=NULL)
    {
            for(i=0;i<10;i++)
            {
            if((temp->priority)<(temp->next->priority))
            {
                a[i]=temp->data;
                enqueue(a[i]);
            }
            }

       temp=temp->next;
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    {
    printf("Queue is empty\n");
    end=NULL;
    }
    else
    {
        front=front->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int ch,i;
    struct node *p;
    for(;;)
    {
        printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.Check\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:p=getnode();
                   enqueue(p->data);
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:check();
            break;
            case 5:exit(0);
        }
    }
}
