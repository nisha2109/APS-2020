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
struct node *findMin(struct node *root)
{
    struct node *temp;
    temp=root->left;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    return root;
}
struct node *finMax(struct node *root)
{
    struct node *temp;
    temp=root->right;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    return root;
}
struct node *sum(struct node *root)
{
    if(root==NULL)
    return root;
    else
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
    }
    if(l>r)
    return (l+1);
    else
    return (r+1);
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
int main()
{
    struct node *root=NULL,*p,*t;
  int ch,item,i,da,h;
  for(;;)
  {
      printf("Enter your choice:\n1.Insert\n2.Search\n3.Display\n4.Delete\n6.Exit\n5.Height\n");
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
          break;
          case 3:inorder(root);
          break;
          case 4:printf("Enter the data to be deleted\n");
          scanf("%d",&da);
          t=delete1(root,da);
          break;
          case 5:h=height(root);
          printf("Height of the tree is:%d\n",h);
          break;
          case 6:exit(0);
      }
  }
    return 0;
}

