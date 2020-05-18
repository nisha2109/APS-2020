#include <stdio.h>
#include <stdlib.h>
#include<String.h>
int main()
{
    char a[]="KLE";
    char b[]="Tech";
    char c[]="Medical";
    char d[]="Pharma";
    char e[]="School";
    char s[20];
    int y,l;
    l=strlen(a);
    printf("Enter your choice as\n1.Tech\n2.Medical\n3.Pharma\n4.School\n");
    scanf("%c",&y);
    switch(y)
    {
        case 1:printf("%s",strupr(strcat(a,b)));
        break;

        case 2:
        strcpy(a,"KLE");
        printf("%s\n",strupr(strcat(a,c)));
        break;

        case 3:
        strcpy(a,"KLE");
        printf("%s\n",strupr(strcat(a,d)));
        break;

        case 4:
        strcpy(a,"KLE");
        printf("%s\n",strupr(strcat(a,e)));
        break;
    }




    return 0;
}
