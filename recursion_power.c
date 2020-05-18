#include <stdio.h>
#include <stdlib.h>
long int power(int base,int p)
{
    if(p==0)
    return 1;
    else if( p==1)
    return base;
    else
    return base*(power(base,p-1));
}
int main()
{
    int b,p;
    long int ans;
    printf("Enter the base value\n");
    scanf("%d",&b);
    printf("Enter the power value\n");
    scanf("%d",&p);
    ans=power(b,p);
    printf("The answer is:%ld",ans);
    return 0;
}
