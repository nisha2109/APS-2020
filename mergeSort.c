#include <stdio.h>
#include <stdlib.h>
void merge(int a[],int low,int mid,int high)
{
    int t[10];
    int i=low;
    int j=mid+1;
    int k=low;
    while((i<=mid) && (j<=high))
    {
        if(a[i]<=a[j])
        t[k++]=a[i++];
        else
        t[k++]=a[j++];
    }
    while(i<=mid)
    t[k++]=a[i++];
    while(j<=high)
    t[k++]=a[j++];
    for(i=low;i<=high;i++)
    a[i]=t[i];
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low!=high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int a[10],n,i;
    printf("Enter the sie of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    printf("Sorted array:\n");
    mergesort(a,0,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
