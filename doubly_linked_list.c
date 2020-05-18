#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int usn;
};
struct node
{
    struct student s;
    struct node *next;
    struct node *prev;
}*start,*end;
struct node *getnode()
{
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the name of the student\n");
    scanf("%s",p->s.name);
    printf("Enter the USN of the student\n");
    scanf("%d",&p->s.usn);
    p->prev=NULL;
    p->next=NULL;
    return(p);
}
void insert_e()
{
    struct node *p;
    p=getnode();
    if(start==NULL)
    {
        start=p;
        end=p;
    }
    else
    {
        end->next=p;
        p->prev=end;
        end=p;

    }

}
void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("Name:%s\tUSN:%d\n",temp->s.name,temp->s.usn);
        temp=temp->next;
    }
}
void delete_e()
{
    if(start==NULL)
    printf("No nodes left to be deleted\n");
    else if(start->next==NULL)
    {
        start=NULL;
        end=NULL;
    }
    else
    {
    end=end->prev;
        end->next=NULL;
    }

}
void insert_b()
{
    struct node *p;
    p=getnode();
    if(start==NULL)
    {
        start=p;
        end=p;
    }
    else
    {
        p->next=start;
        start->prev=p;
        start=p;

    }
}
int main()
{
    int ch;
    start=NULL,end=NULL;
    for(;;)
    {
        printf("Enter your choice\n1.Insert at end\n2.Display\n3.Delete at end\n4.Insert at beginning\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_e();break;
            case 2:display();break;
            case 3:delete_e();break;
            case 4:insert_b();break;
            case 5:exit(0);break;
        }
    }
    return 0;
}
