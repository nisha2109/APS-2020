#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create_bst(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node *)malloc(sizeof(struct node));
        root->left=NULL;
        root->right=NULL;
        root->data=item;
        return root;
    }
    else
    {
        if(item<root->data)
        root->left=create_bst(root->left,item);
        if(item>root->data)
        root->right=create_bst(root->right,item);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
struct node *search(struct node *root,int i)
{
    if(root==NULL)
    {
    printf("Element not found\n");
    return;
    }
    else
    {
        //if(root->data==i)
        //printf("Element found\n");
        if(i<root->data)
        {
        root->left=search(root->left,i);
        count++;
        printf("Ancestor:%d\n",root->data);
        }
        if(i>root->data)
        {
        root->right=search(root->right,i);
        count++;
        printf("Ancestor:%d\n",root->data);
        }

    }

}
int main()
{
    struct node *root=NULL,*p,*t;
  int ch,item,i,da;
  for(;;)
  {
      printf("Enter your choice:\n1.Insert\n2.Search\n3.Display\n4.Exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:printf("Enter the data\n");scanf("%d",&item);
          root=create_bst(root,item);
          break;
          case 2:printf("Enter the item to be searched\n");
          scanf("%d",&i);
          if(root==NULL)
          printf("Tree is empty\n");
          else
          p=search(root,i);
          printf("Shortest distance:%d\n",count);
          break;
          case 3:inorder(root);
          break;
          case 4:exit(0);
      }
  }
    return 0;

    return 0;
}
