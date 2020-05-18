#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[],int first,int last)
{
    if(first<last){
    int pivot=first;
    int i=first+1;
    int j=last;
    int temp;
    while(i<j)
    {
        while(a[i]<=a[pivot]&& i<last)
        i++;
        while(a[j]>a[pivot])
        j--;
        if(i<j)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
    }
}
int main()
{
    int i,n,a[10];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    printf("Sorted array:\n");
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
