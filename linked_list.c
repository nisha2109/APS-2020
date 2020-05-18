#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int usn;
    float cgpa;
};
struct node
{
    struct student s;
    struct node *next;
};
struct node* create_node();
void display(struct node *next);
int main()
{
    int i,n,ch,c;
    struct node *p,*head,*prev;

    head=NULL;
    //do
    //{
    for(;;)
    {
        printf("Enter your choice\n1.Regular students\n2.Lateral Entry\n3.Change of Branch\n4.Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("Enter the number of students\n");
               scanf("%d",&n);
               for(i=0;i<n;i++)
               {
                   p=create_node();
                   if(head==NULL)
                   head=p;
                   else
                   prev->next=p;
                   prev=p;

               }
               break;

       case 2://c='Y';
              //while(c!='N')
              //{
                  p=create_node();
                  if(head==NULL)
                  head=p;
                  else
                  {
                  prev->next=head;//Inserting node at the beginning
                  head=p;
                  }
                  //printf("Are there more students?:Y or N\n");
                  //scanf("%*c%c",&c);
                  //if(c=='Y')
                  /*{
                      p=create_node();
                      if(head==NULL)
                      head=p;
                      else
                      prev->next=p;
                      prev=p;
                      printf("Are there more students?:Y or N\n");
                      scanf("%*c%c",&c);
                  }
              }*/
              break;
       case 3:c='Y';
              while(c!='N')
              {
                  p=create_node();
                  if(head==NULL)
                  head=p;
                  else
                  prev->next=p;
                  prev=p;
                  printf("Are there more students?:Y or N\n");
                  scanf("%*c%c",&c);
                  if(c=='Y')
                  {
                      p=create_node();
                      if(head==NULL)
                      head=p;
                      else
                      prev->next=p;
                      prev=p;
                      printf("Are there more students?:Y or N\n");
                      scanf("%*c%c",&c);
                  }
              }
              break;



    case 4:display(head);
    break;
    //}while(ch!=4);
    //display(head);

}
    }
return 0;
}
struct node *create_node()
{
    struct node *p;
    p=malloc(sizeof(struct node));
    //getdata(&p->s);
    printf("Enter the name of the student\n");
    scanf("%s",p->s.name);
    printf("Enter the USN of the student\n");
    scanf("%d",&p->s.usn);
    printf("Enter the CGPA of the student\n");
    scanf("%f",&p->s.cgpa);
    p->next=NULL;
    return p;
}
void display(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Name:%s\tUSN:%d\tCGPA:%f\n",temp->s.name,temp->s.usn,temp->s.cgpa);
        temp=temp->next;
    }
}
