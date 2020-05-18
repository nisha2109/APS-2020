#include <stdio.h>
#include <stdlib.h>
int count=0;
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
        if(item>root->data)
        root->right=createbst(root->right,item);
    }
    return root;
}
struct node *search(struct node *root,int key)
{
    if(root==NULL)
    printf("The key is not found\n");
    else
    {
        if(root->data==key)
        printf("Key found\n");
        else if(key<root->data)
        root->left=search(root->left,key);
        else if(key>root->data)
        root->right=search(root->right,key);
    }
    return root;
}
struct node *min(struct node *root)
{
    struct node *temp;
    temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return root;
}
struct node *del(struct node *root,int item)
{
    if(root==NULL)
    return root;
    else if(item<root->data)
    root->left=del(root->left,item);
    else if(item>root->data)
    root->right=del(root->right,item);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            root=NULL;
            return root;
        }
        else if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        struct node *temp=min(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
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
struct node *Min(struct node *root)
{
    struct node *temp;
    temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
struct node *Max(struct node *root)
{
    struct node *temp;
    temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
int sum(struct node *root)
{
    if(root==NULL)
    return 0;
    else
    return ((root->data)+sum(root->left)+sum(root->right));

}
int height(struct node *root)
{
    int l,r;
    if(root==NULL)
    return 0;
    l=height(root->left);
    r=height(root->right);
    if(l>r)
    return (l+1);
    else
    return (r+1);
}
int level(struct node *root,int key)
{


    {
        if(root->data==key)
        {
             return 0;
        }
        else if(key<root->data)
        {
            root->left=level(root->left,key);
            count++;
        }
        else if(key>root->data)
        {
            root->right=level(root->right,key);
            count++;
        }

    }
    return count;
}
struct node *ancestor(struct node *root,int item)
{
    if(root==NULL)
    return root;
    else
    {
         if(item<root->data)
        {
            root->left=ancestor(root->left,item);
            printf("Ancestor:%d\n",root->data);
        }
        else if(item>root->data)
        {
            root->right=ancestor(root->right,item);
            printf("Ancestor:%d\n",root->data);
        }
    }
    return root;
}
int main()
{
    struct node *root=NULL,*p,*mini,*max,*anc;
    int ch,item,key,da,a,l,s,h,le;
    for(;;)
    {
        printf("Enter your choice\n1.Insert\n2.Search\n3.Delete\n4.Display\n5.Minimum\n6.Maximum\n7.Sum\n8.Height\n9.Level\n10.Ancestor\n11.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the data:\n");
                   scanf("%d",&item);
                   root=createbst(root,item);
                   break;
            case 2:printf("Enter the element to be searched\n");
                   scanf("%d",&key);
                   if(root==NULL)
                   printf("The tree is empty\n");
                   else
                   p=search(root,key);
                   break;
            case 3:printf("Enter the element to be deleted\n");
                   scanf("%d",&da);
                   root=del(root,da);
                   break;
            case 4:inorder(root);
                   printf("\n");
                   break;
            case 5:mini=Min(root);
                   printf("Minimum element in tree:%d\n",mini->data);
                   break;
            case 6:max=Max(root);
                   printf("Maximum element is tree:%d\n",max->data);
                   break;
            case 7:s=sum(root);
                   printf("Sum:%d\n",s);
                   break;
            case 8:h=height(root);
                   printf("Height:%d\n",h);
                   break;
            case 9:printf("Enter the element whose level is to be found\n");
                   scanf("%d",&le);
                   l=level(root,le);
                   printf("Level:%d\n",l);
                   break;
            case 10:printf("Enter the element whose ancestor is to be found\n");
                    scanf("%d",&a);
                    anc=ancestor(root,a);
                    break;
            case 11:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
