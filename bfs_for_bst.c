#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int visited;
};
struct queue
{
    int dat;
    int cwn;
    struct queue *next;
}*front,*end;
struct node *getnode(struct node *g)
{
    struct queue *p;
    p=malloc(sizeof(struct queue));
    p->dat=g->data;
    p->next=NULL;
    p->cwn=0;
    return p;
}
int  enqueue(struct node *g)
{
    int flag=0;
    struct queue *p;
    p=getnode(g);
    if(front==NULL)
    {
        front=p;
        end=p;
        flag++;

    }
    else
    {
        end->next=p;
        end=p;
        flag++;
    }
    return flag;
}
struct queue *dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL)
    return;
    else
    {
         front=front->next;
         return(temp);
    }
}
void display()
{
    struct queue *temp;
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->dat);
        temp=temp->next;
    }
}
struct node *createbst(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->left=NULL;
        root->right=NULL;
        root->data=item;
        root->visited=0;
        count++;
    }
    else
    {
        if(item<root->data)
        {
        root->left=createbst(root->left,item);

        }
        else if(item>root->data)
        {
        root->right=createbst(root->right,item);

        }
    }
    return (root);
}
void dfs(struct node *root)
{
    if(root==NULL)
    return;
    else
    {
        if(root!=NULL)
        {
            dfs(root->left);
            root->visited=1;
            dfs(root->right);
        }
        if(root->visited==1)
        printf("%d\t",root->data);
    }
}
void bfs(struct node *root)
{
    struct queue *p;
    int i=0;
    struct node a[i]=root;
    int j=0;
    if(root==NULL)
    return;
    else
    {
        while(i!=count)
        {

             if(root->left!=NULL && root->right!=NULL)
             {
             a[i]=root->left;
             i++;
             a[i]=root->right;
             i++;
             a[j++]=root->left;
             }
             else if(root->left!=NULL && root->right==NULL)
             {
                 a[i]=root->left;
                 i++;
                 a[j++]=root->right;

             }
             else if(root->right!=NULL && root->left==NULL)
             {
                 a[i]=(root->right);
                 i++;
                 a[j++]=root->left;

             }
             else if(root->right==NULL && root->left==NULL)
                  a[i]=root;
                  i++;
                  a[j++]=root->right;

        }


    }
    for(i=0;i<count;i++)
    printf("%d\t",a[i]);
}
int main()
{
    struct node *root=NULL;
    int ch,item;
    for(;;)
    {
        printf("Enter your choice:\n1.Insert\n2.DFS\n3.BFS\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the data:\n");
                   scanf("%d",&item);
                   root=createbst(root,item);
                   break;

            case 2:dfs(root);
                   printf("\n");
                   printf("Number of nodes:%d\n",count);
                   break;
            case 3:bfs(root);
            printf("\n");
            break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
