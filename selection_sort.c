#include <stdio.h>
#include <stdlib.h>
void selection(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main()
{
    int a[100],n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selection(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
