#include <stdio.h>
#include <stdlib.h>
int count=0;
void toh(int n,char from,char to,char aux);
int main()
{
    int n;
    printf("Enter the number of discs\n");
    scanf("%d",&n);
    toh(n,'A','B','T');
    return 0;
}
void toh(int n,char from,char to,char aux)
    {
        if(n==1)
        {
            printf("\nMove disk 1 from rod %c to %c",from,to);
            count++;
            return;
        }
        toh(n-1,from,aux,to);
        printf("\nMove disk %d from rod %c to %c",n,from,to);
        count++;
        toh(n-1,aux,to,from);
        printf("\nNo of moves:%d\n",count);
    }
