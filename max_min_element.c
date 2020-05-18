#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,max,min,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    printf("Maximum:%d\nMinimum:%d\n",max,min);
    return 0;
}
