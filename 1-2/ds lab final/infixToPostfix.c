#include <stdio.h>
#include <stdlib.h>
int precedence (char x);

int precedence( char x)
{
    if(x== '(' || x=='@')
       return 0;
   else if(x=='+' || x=='-')
   return 1;
   else if(x=='*' || x== '/')
   return 2;
   else
   return 3;
}
int main()
{
    char stack[40],infix[20],postfix[20],inch,stackch;
    int i,j,top;
    printf("enter a valid expresssion\n\n");
    scanf("%s",infix);
    top=-1;
    stack[++top]='@';
    for(i=0,j=0;infix[i]!='\0';i++)
    {
        inch=infix[i];
        if(isalpha(inch) || isdigit(inch))
        postfix[j++]=inch;
        else if(inch=='(')
                stack[++top]=inch;
                else if(inch==')')
                {
                    while(stack[top]!='(')
                          postfix[j++]=stack[top--];
                          top--;
                }
                else
                {
                    while(precedence(inch)<=precedence(stack[top]))
                    {
                        postfix[j++]=stack[top--];
                    }
                    stack[++top]=inch;
                }
    }
    while(stack[top]!='@')
    postfix[j++]=stack[top--];
    postfix[j]='\0';
    printf("%s  =  %s   \n\n",infix,postfix);
    return 0;
}
