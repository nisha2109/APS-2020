#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
}
int main()
{
    int n,i,f;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f=fib(i);
        printf("%d\t",f);
    }
    return 0;
}
