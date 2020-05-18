#include <stdio.h>
#include <stdlib.h>
int a[20],count1=0,count2=0;
int end1=-1,end2=-1,front1=0,front2=0;
void enqueue1(int size)
{
    if(count1==size/2)
    printf("Queue is full\n");
    else
    {
        if(end1==(size+1)/2 && count1==size/2)
        {
            end1=end1%((size+1)/2);
            printf("Enter the data\n");
            scanf("%d",&a[end1]);
            count1++;
        }
        else
        {
            end1++;
            printf("Enter the data\n");
            scanf("%d",&a[end1]);
            count1++;
        }
    }
}
void dequeue1(int size)
{
    if(count1==0)
    printf("Queue is empty\n");
    else
    {
        if(front1==size+1)
        {
            printf("Deleted element is:%d\n",a[front1]);
            front1=front1%(size+1);
            count1--;
        }
        else
        {
            printf("Deleted element is:%d\n",a[front1]);
            front1++;
            count1--;
        }
    }
}
void enqueue2(int size)
{
    if(count2==size/2)
    printf("Queue is full\n");
    else
    {
        if(end2==(size+1)/2 && count2==size/2)
        {
            end2=end2%((size+1)/2);
            printf("Enter the data\n");
            scanf("%d",&a[end2]);
            count2++;
        }
        else
        {
            end2++;
            printf("Enter the data\n");
            scanf("%d",&a[end2]);
            count2++;
        }
    }
}
void dequeue2(int size)
{
    if(count2==0)
    printf("Queue is empty\n");
    else
    {
        if(front2==(size+1)/2)
        {
            printf("Deleted element is:%d\n",a[front2]);
            front2=front2%((size+1)/2);
            count2--;
        }
        else
        {
            printf("Deleted element is:%d\n",a[front2]);
            front2++;
            count2--;
        }
    }
}
void display1(int size)
{
    int i;
    for(i=front1;i<=end1;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
void display2(int size)
{
    int i;
    for(i=front2;i<=end2;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
int main()
{
    int n,ch;
    printf("Enter the size of the queue\n");
    scanf("%d",&n);
    for(;;)
    {
        printf("Enter your choice\n1.Enqueue from left\n2.Enqueue from right\n3.Dequeue from left\n4.Dequeue from right\n5.Display from left\n6.Display from right\n7.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue1(n);
            break;
            case 2:enqueue2(n);
            break;
            case 3:dequeue2(n);
            break;
            case 4:dequeue2(n);
            break;
            case 5:display1(n/2);
            break;
            case 6:display2(n/2);
            break;
            case 7:exit(0);
            break;
        }
    }
    return 0;
}
