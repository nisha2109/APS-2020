#include <stdio.h>
#include <stdlib.h>
int count(int n)
{
    if(n==1)
    return 1;
    else
    return (1+count(n/10));
}
int main()
{
    int n,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    c=count(n);
    printf("The number of digits are:%d\n",c);
    return 0;
}
