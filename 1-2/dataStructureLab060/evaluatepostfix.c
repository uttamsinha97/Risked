#include <stdio.h>
#include <ctype.h>

int main()
{
    char postfix[30];
    int stack[25];
    int i=0,top=-1;
    int op1,op2;
    int res;
    char ch;
    printf("enter a valid postfix expresssion\n");
    scanf("%s",postfix);
    while(postfix[i++]!='\0')
    {

        ch=postfix[i];
        int val = (int)ch;
        if(isdigit(val))
        stack[++top]=val;
        else
        {
            op2=stack[top--];

            op1=stack[top--];
        switch(val)
        {
        case '+' : res=op1+op2;
stack[++top]=res;
                    break;
        case '-' : res=op1-op2;
        stack[++top]=res;
        break;
        case '*' : res=op1*op2;
        stack[++top]=res;
        break;
        case '/' : res=op1/op2;
        stack[++top]=res;
        break;
        default  : printf("invalid operator in expression\n\n");
        }

        }
    }
if(top==0)
printf("%s = %d ",postfix,stack[top]);
else
printf("invalid input\n\n");
return 0;
}
