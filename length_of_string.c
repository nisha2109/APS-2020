#include <stdio.h>
#include <stdlib.h>
int lenght(char s[],int index)
{

        if(s[index]=='\0')
        return 0;
        else
        return(1+lenght(s,index+1));


}
int main()
{
    int l;
    char s[20];
    printf("Enter the string:\n");
    scanf("%s",s);
    l=lenght(s,0);
    printf("Lenght of the string is:%d\n",l);
    return 0;
}
