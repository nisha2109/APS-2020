#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 50
struct stack
{
    char c[size];
    int top;
}st;
push(char el)
{
    (st.top)++;
    st.c[st.top]=el;
}
char pop()
{
    return st.c[st.top--];
}
int pr(char e)
{
    switch(e)
    {
        case '#':return 0;
        case '(':return 1;
        case '+':
        case '-':return 2;
        case '*':
        case '/':return 3;
    }
}
int main()
{
    char infix[50],prefix[50],ch,element,temp[50];
    int i=0,k=0;
    st.top=-1;
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    strcpy(temp,infix);
    strrev(infix);
    ch=infix[0];
    while(ch!='\0')
    {
        ch=infix[i];
        if(ch=='(')
           infix[i]=')';
           else if(ch==')')
           infix[i]='(';
           i++;
    }
    i=0;
    push('#');
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
           push(ch);
           else if(isalnum(ch))
           prefix[k++]=ch;
           else if(ch==')')
           {
               while(st.c[st.top]!='(')
                     prefix[k++]=pop();
                     element=pop();
           }
           else
           {
               while(pr(st.c[st.top])>=pr(ch))
               prefix[k++]=pop();
               push(ch);
           }
    }
    while((st.c[st.top])!='#')
    prefix[k++]=pop();
    prefix[k]='\0';

    printf("Infix expression:%s\nPrefix expression:%s\n",temp,strrev(prefix));
    return 0;
}
