#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
    if(n/10==0)
    return n;
    else
    return (n%10+sum(n/10));
}
int main()
{
    int n,s;
    printf("Enter the number\n");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum of digits of a number is %d\n",s);
    return 0;
}
