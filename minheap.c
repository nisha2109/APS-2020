#include <stdio.h>
#include <stdlib.h>
void heapify(int a[],int n,int i)
{
    int l,r,smallest,temp;
    smallest=i;
    l=2*i+1;
    r=2*i+2;
    if(l<n && a[l]<a[smallest])
    smallest=l;
    if(r<n && a[r]<a[smallest])
    smallest=r;
    if(smallest!=i)
    {
        temp=a[i];
        a[i]=a[smallest];
        a[smallest]=temp;
        heapify(a,smallest,n);
    }
}
void heapsort(int a[],int n)
{
    int i,temp;
    for(i=0;i<=n/2-1;i--)
    heapify(a,i,n);
    for(i=0;i<=n-1;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,0,i);
    }
}

int main()
{
    int n,a[10],i;
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
    heapsort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
