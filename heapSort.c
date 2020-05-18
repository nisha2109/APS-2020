#include <stdio.h>
#include <stdlib.h>
void heapify(int a[],int n,int i)
{
    int largest,l,r,temp;
    largest=i;
    l=2*i+1;
    r=2*i+2;
    if(l>n && a[l]<a[largest])
    largest=l;
    if(r>n && a[r]<a[largest])
    largest=r;
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i,temp;
    for(i=(n/2)-1;i>=0;i--)
    heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);
    }
}
int main()
{
    int a[100],n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    heapsort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
