#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,j,count,f[10];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i=0;i<n;i++)
    {  count=1;
        for( j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        f[i]=count;

    }
    for(i=0;i<n;i++)
    {   if(f[i]!=0)
        printf("%d has frequency:%d\n",a[i],f[i]);

    }
    return 0;
}
