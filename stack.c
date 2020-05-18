#include <stdio.h>
#include <stdlib.h>
struct book
{
    char name[20];
    int book_id;
    float price;
};
void push(struct book b[10],int *top);
struct book pop(struct book b[10],int *top);
void display(struct book b[10],int *top);
int main()
{
    struct book b[10],p;
    int ch;
    int top=-1; //Either top can be created using pointer.It is taken as -1 as 0 points to the first value
    for(;;)
    {
        printf("Enter your choice\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push(b,&top);break;
            case 2:p=pop(b,&top);
                   printf("Name:%s\tBook Id:%d\tPrice:%f\n",p.name,p.book_id,p.price);//prints the details of the book which is removed from the stack
                   break;
            case 3:display(b,&top);break;
            case 4:exit(0);
        }
    }
    return 0;
}
void push(struct book b[10],int *top) //inserting element in the stack.Array by default is a pointer so no need to return b[] and top is pointer so it is call by reference
{
    (*top)++;
    printf("Enter the name of the book\n");
    scanf("%s",b[*top].name);
    printf("Enter the book id\n");
    scanf("%d",&b[*top].book_id);
    printf("Enter the price of the book\n");
    scanf("%f",&b[*top].price);
    if(*top>10)
    {
    printf("Stack Overflow\n");
    return;
    }
}
struct book pop(struct book b[10],int *top) //removing the element in the stack.
{
    struct book temp;
    if(*top<0)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
    temp=b[*top];
    (*top)--;
    return temp;
    }
}
void display(struct book b[10],int *top)
{
    int i;
    for( i=0;i<=(*top);i++)
    printf("Name:%s\tBook ID:%d\tPrice:%f\n",b[i].name,b[i].book_id,b[i].price);
}
