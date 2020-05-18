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
    return (st.c[st.top--]);
}
int pr(char e) //Assigns precedence
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
    char temp[50],infix[50],pofix[50],ch,element,val1,val2;
    int i=0,k=0,ans;
    st.top=-1;
    printf("Enter the infix string\n");
    scanf("%s",infix);
    ch=infix[0];

    i=0;
    push('#'); //First element in the stack is initialized to #
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
           push(ch);
           else
           if(isalnum(ch)) //checks for alphanumeric characters
           pofix[k++]=ch;
           else

               if(ch==')')
               {
                   while(st.c[st.top]!='(')
                         pofix[k++]=pop();
                         element=pop();  //REmove the brackets from the stack

               }
               else
               {
                   while(pr(st.c[st.top])>=pr(ch))
                   pofix[k++]=pop();
                   push(ch); //To remove one element of same precedence(+) and push the second one of same precedence(-)
               }


    }
    while(st.c[st.top]!='#')
    pofix[k++]=pop();
    pofix[k]='\0';
    printf("The infix string is:%s\nThe postfix string is:%s\n",infix,pofix);
    while((ch=pofix[k++])!='\0')
    {
        ch=pofix[k];
        if(isalnum(ch))
        push(ch);
        else
        {
                switch(ch)
        {
            case '*':val1=pop();
                     val2=pop();
                     ans=atol(val1)*atol(val2);
                     push(ans);
                    break;
            case '+':val1=pop();val2=pop();ans=atol(val1)+atol(val2);push(ans);break;
            case '-':val1=pop();val2=pop();ans=atol(val1)-atol(val2);push(ans);break;
            case '/':val1=pop();val2=pop();ans=atol(val1)/atol(val2);push(ans);break;
        }
        }

    }
    printf("The answer of the given expression is :%s\n",p1.c[st.top]);
    return 0;
}

