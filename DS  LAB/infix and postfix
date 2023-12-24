#include<stdio.h>
#define size 50
#include<ctype.h>
char s[size];
int top=-1;
int push(char elem)
{
    s[++top]=elem;
}
char pop()
{
    return (s[top--]);
}
int pr(char elem)
{
    switch(elem)
    {
        case'#':return 0;
        case'(':return 1;
        case'-':return 2;
        case'+':
        case'*':case'/':
        case'%':return 3;
        case'^':return 4;
    }
}
void main()
{
    char infx[50],pofx[50],ch,elem;
    int i=0,k=0;
    printf("\nRead the infix expression?");
    scanf("%s",infx);
    push('#');
    while((ch=infx[i++])!='\0')
    {
        if(ch=='(')
        push(ch);
        else if(isalnum(ch))
        pofx[k++]=ch;
        else if(ch==')')
        {
            while(s[top]!='(')
            pofx[k++]=pop();
            elem=pop();
        }
        else
        {
            while(pr(s[top])>=pr(ch))
            pofx[k++]=pop();
            push(ch);
        }
    }
    while(s[top]!='#')
    pofx[k++]=pop();
    pofx[k]='\0';
    printf("\n\n given infix expression is :%s postfix expression is :%s\n",infx,pofx);
}
