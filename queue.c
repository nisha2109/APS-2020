//Queue is a data ttructure which has two ends called front and rear. the element in the queue can enter through the rear end and will be deleted from front end. The process of inserting a vaue is inqueue and the process of deleting a value is called as dequeue
//Circular queue is rolling back to the start using mod opeartion
#include <stdio.h>
#include <stdlib.h>
 int a[100],front=0,end=-1,count=0;
 void enqueue(int size)
 {
     if(count==(size))
     printf("Queue is full\n");
     else
     {
         if(end==(size+1)&& count<(size+1))
         {
         end=end%(size+1);
         printf("Enter the data\n");
         scanf("%d",&a[end]);
         count++;
         }
         else
         {
             end++;
             printf("Enter the data\n");
             scanf("%d",&a[end]);
             count++;

         }


     }
 }
 void dequeue(int size)
 {

    if(count==0)
    printf("Queue is empty\n");
    else
    {
        if(front==(size+1))
        {
            printf("Deleted element:%d\n",a[front]);
            front=front%(size+1);
            count--;
        }
        else
        {
            printf("Deleted element:%d\n",a[front]);
            front++;
            count--;
        }
    }
 }
 void display()
 {
     int i;
     printf("Data:\n");
     for(i=front;i<=end;i++)
     printf("%d\t",a[i]);
     printf("\n");
 }
int main()
{
    int ch,size;
    printf("Enter the size of the queue\n");
    scanf("%d",&size);
    for(;;)
    {
        printf("Enter your choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue(size);break;
            case 2:dequeue(size);break;
            case 3:display();break;
            case 4:exit(0);break;
        }
    }
    return 0;
}
