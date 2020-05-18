#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createbst(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->data=item;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        if(item<root->data)
        root->left=createbst(root->left,item);
        else if(item>root->data)
        root->right=createbst(root->right,item);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
int height(struct node *root)
{
    int l,r;
    if(root==NULL)
    return 0;
    else
    {
        l=height(root->left);
        r=height(root->right);
        if(l>r)
        return l+1;
        else
        return r+1;
    }
}
void Level(struct node *root,int l)
{
    if(root==NULL)
    return;
    else
    {
        if(l==0)
        printf("%d\t",root->data);
        else if(l>=1)
        {
            Level(root->left,l-1);
            Level(root->right,l-1);
        }
    }
}
void bfs(struct node *root)
{
    int h=height(root);
    int i;
    for(i=0;i<=h;i++)
    Level(root,i);
}
int main()
{
    int ch,it;
    struct node *root=NULL;
    for(;;)
    {
        printf("Enter your choice\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.BFS\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the tree element:\n");
                   scanf("%d",&it);
                   root=createbst(root,it);
                   break;
            case 2:inorder(root);
            printf("\n");
            break;
            case 3:preorder(root);
            printf("\n");
            break;
            case 4:postorder(root);
            printf("\n");
            break;
            case 5:bfs(root);
            printf("\n");
            break;
            case 6:exit(0);

        }
    }
    return 0;
}
