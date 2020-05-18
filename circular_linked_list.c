#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
}*head,*prev;
struct node *getnode()
{
    struct node *p;
    p=malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&p->data);
    p->next=NULL;
    p->pre=NULL;
    return p;
}
void insert_b()
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
        p->next=head;
        head=p;
    }
}
void insert_e()
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
        p->pre=prev;
        prev=p;
    }
}
void insert_m()
{
    struct node *p,*temp;
    temp=head;
    int key;
    printf("Enter the key element after which the element is to be inserted\n");
    scanf("%d",&key);
    p=getnode();
    if(head->data==key)
    insert_b();
    else if(prev->data==key)
    insert_e();
    else
    {
        while(temp->data!=key)
        temp=temp->next;
        p->next=temp->next;
        temp->next->pre=p;
        p->pre=temp;
        temp->next=p;
    }
}
void delete_b()
{
    if(head==NULL)
    printf("The list is empty\n");
    else
    {
        head=head->next;
        head->next->pre=head;
    }
}
void delete_e()
{
    if(head==NULL)
    printf("This is empty\n");
    else
    {
        prev=prev->pre;
        prev->next=NULL;
    }
}
void delete_m()
{
    struct node *temp,*p;
    temp=head;
    int key;
    printf("Enter the element which is to be deleted\n");
    scanf("%d",&key);
    if(head==NULL)
    printf("The list is empty\n");
    else if(head->data==key)
    delete_b();
    else if(prev->data==key)
    delete_e();
    else
    {
        while(temp->data!=key)
        temp->pre->next=temp->next->next;
        temp->next->next->pre=temp->pre;
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
    int ch;
    for(;;)
    {
    printf("Enter your choice\n1.Insert in beginning\n2.Insert in between\n3.Insert at end\n4.Delete in beginning\n5.Delete in between\n6.Delete at end\n7.Display\n8.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert_b();
        break;
        case 2:insert_m();
        break;
        case 3:insert_e();
        break;
        case 4:delete_b();
        break;
        case 5:delete_m();
        break;
        case 6:delete_e();
        break;
        case 7:display();
        printf("\n");
        break;
        case 8:exit(0);
        default:printf("Invalid choice\n");
    }
    }
    return 0;
}
