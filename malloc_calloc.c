#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,*ptr,max;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    //ptr=(int*)calloc(num ,sizeof(int));
    ptr=(int*)malloc(num*sizeof(int));//int* is type casting of the number of bytes to int,if we need it as float we type cast the memory as float
    if(ptr==NULL)
    {
        printf("Error!memory not allocated\n");
        exit(0);

    }
    printf("Enter the elements of array:\n");

    for(i=0;i<num;i++)
    {

        scanf("%d",ptr+i);
    }
    max=*ptr;
    for(i=0;i<num;i++)
    {
        if(*(ptr+i)>max)
        max=*(ptr+i);
    }
    ptr=realloc(ptr,(num+1)*sizeof(int));
    for(i=0;i<=num;i++)
    {
       *(ptr+num)=max;
    printf("%d\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}
