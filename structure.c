#include <stdio.h>
#include <stdlib.h>
struct lk read(struct lk);
void print(lk1);

struct lk
{

    char name[10];
    char dob[10];
    char pob[10];
    float rateq;
};
struct lk lk1,lk2;
void getref(struct lk *lk);
int main()

{   struct lk1 *l1;
    getref(&l1);
    l1->name=lk1.name;
    lk1=read(lk1);
    FILE *fp;
    fp=fopen("Structure.txt","w");
    fprintf(fp,"%s%s%s%f",lk1.name,lk1.dob,lk1.pob,lk1.rateq);
    fclose(fp);
    struct lk temp1,temp;
    struct lk *l1;
    l1=&lk2;
    lk2
    temp1=read(lk1);
    getref(l1);
    printf("Name of the lion %s\n",lk1.name);
        printf("Date of birth of the lion %s\n",lk1.dob);
        printf("Place of birth of the lion %s\n",lk1.pob);
        printf("Rate of the lion\n %f\n",lk1.rateq);

    return 0;
}

struct lk read(struct lk lk1)
{

        printf("Name of the lion\n");
        scanf("%s",lk1.name);
        printf("Date of birth of the lion\n");
        scanf("%s",lk1.dob);
        printf("Place of birth of the lion\n");
        scanf("%s",lk1.pob);
        printf("Rate of the lion\n");
        scanf("%f",&lk1.rateq);
        return lk1;

}
/*void print(struct lk lk1[])
{
    int i;
    for(i=0; i<1; i++)
    {
        printf("Name of the lion\n");
        printf("%s\n",lk1[i].name);
        printf("Date of birth of the lion\n");
        printf("%s\n",lk1[i].dob);
        printf("Place of birth of the lion\n");
        printf("%s\n",lk1[i].pob);
        printf("Rate of the lion\n");
        printf("%f\n",lk1[i].rateq);
    }

}*/
void getref(struct lk *l)
{

    printf("Enter name of lion\n");
    scanf("%s",l->name);
    printf("Enter rate of lion\n");
    scanf("%f",&l->rateq);
}
