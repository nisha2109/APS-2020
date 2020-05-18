#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],o[10],e[10],n,i,k=0,j=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[j]=a[i];
            j++;
        }
        else
        {
            o[k]=a[i];
            k++;
        }
    }
       printf("Even array:\n");
       for(i=0;i<j;i++)
       printf("%d\t",e[i]);
       printf("\nOdd array:\n");
       for(i=0;i<k;i++)
       printf("%d\t",o[i]);

    return 0;
}
