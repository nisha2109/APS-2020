#include <stdio.h>
#include <stdlib.h>
void read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selectionsort(int a[],int n)
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
void insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k,t[10];
    i=low;
    j=mid+1;
    k=low;
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
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void quicksort(int a[],int first,int last)
{
    int pivot,i,j,temp;
    if(first<last)
    {
        pivot=first;
        i=first+1;
        j=last;
        while(i<j)
        {
        while(a[i]<a[pivot] && i<last)
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
    int n,a[10],b[10],c[10],d[10],e[10],ch,i;
    for(;;)
    {
        printf("Enter your choice\n1.Bubble Sort\n2.selection Sort\n3.Insertion Sort\n4.Merge Sort\n5.Quick Sort\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the size of the array:\n");
            scanf("%d",&n);
            printf("Enter elements of array:\n");
            read(a,n);
            printf("Array:\n");
            print(a,n);
            printf("Sorted array:\n");
            bubblesort(a,n);
            print(a,n);
            break;
            case 2:printf("Enter the size of the array:\n");
            scanf("%d",&n);
            printf("Enter elements of array:\n");
            read(b,n);
            printf("Array:\n");
            print(b,n);
            printf("Sorted array:\n");
            selectionsort(b,n);
            print(b,n);
            break;
            case 3:printf("Enter the size of the array:\n");
            scanf("%d",&n);
            printf("Enter elements of array:\n");
            read(c,n);
            printf("Array:\n");
            print(c,n);
            printf("Sorted array:\n");
            insertionsort(c,n);
            print(c,n);
            break;
            case 4:printf("Enter the size of the array:\n");
            scanf("%d",&n);
            printf("Enter elements of array:\n");
            read(d,n);
            printf("Array:\n");
            print(d,n);
            printf("Sorted array:\n");
            mergesort(d,0,n);
            print(d,n);
            break;
            case 5:printf("Enter the size of the array:\n");
            scanf("%d",&n);
            printf("Enter elements of array:\n");
            read(e,n);
            printf("Array:\n");
            print(e,n);
            printf("Sorted array:\n");
            quicksort(e,0,n-1);
            print(e,n);
            break;

            case 6:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
