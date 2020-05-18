#include <stdio.h>
#include <stdlib.h>
void binary_search(int a[],int low,int high,int key)
{
    int mid;
    if(low>high)
    printf("Key not found\n");
    mid=(low+high)/2;
    if(a[mid]==key)
    printf("Key element %d found at position %d",key,mid+1);
    else if(a[mid]>key)
    binary_search(a,low,mid-1,key);
    else if(a[mid]<key)
    binary_search(a,mid+1,high,key);
}
int main()
{
    int n,i,key,a[10];
    printf("Enter the limit of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key element to be searched\n");
    scanf("%d",&key);
    binary_search(a,0,n,key);
}
