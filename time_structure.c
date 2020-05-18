#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
void read(struct time *t);
void print(struct time t);
struct time sum(struct time t[3]);
struct time sub(struct time t[3]);
int main()
{
    struct time t[3],temp,te;
    int i;
    for(i=0;i<2;i++)
    {
        read(&t[i]);
        print(t[i]);
    }
    temp=sum(t);
    te=sub(t);
    printf("Sum is=%d:%d:%d\n",temp.hrs,temp.min,temp.sec);
    printf("Subtraction is=%d:%d:%d\n",te.hrs,te.min,te.sec);
    return 0;
}
void read(struct time *t)
{
    printf("Enter the time in hours\n");
    scanf("%d",&t->hrs);
    printf("Enter the time in minutes\n");
    scanf("%d",&t->min);
    printf("Enter the time in seconds\n");
    scanf("%d",&t->sec);
}
void print(struct time t)
{
    printf("Time in hours:%d",t.hrs);
    printf("\nTime in minutes:%d",t.min);
    printf("\nTime in seconds:%d\n",t.sec);
}
struct time sum(struct time t[2])
{
    struct time temp[0];
    temp[0].hrs=t[0].hrs+t[1].hrs;
    temp[0].min=t[0].min+t[1].min;
    temp[0].sec=t[0].sec+t[1].sec;
    return(temp[0]);
}
struct time sub(struct time t[2])
{
    struct time temp[0];

    temp[0].hrs=t[0].hrs-t[1].hrs;
    temp[0].min=t[0].min-t[1].min;
    temp[0].sec=t[0].sec-t[1].sec;
    return(temp[0]);
}
