#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int i=0,top,op1,op2,stack[100],res,c,j=0;
    char exp[100],temp;
    top=-1;
    printf("enter the prefix expression : ");
    scanf("%s",exp);
    j=strlen(exp)-1;
    while(i<j)
    {
        temp=exp[i];
        exp[i]=exp[j];
        exp[j]=temp;
        i++;
        j--;
    }
    for(i=0;exp[i]!='\0';i++)
    {
    c=exp[i];
    if(isdigit(c))
      stack[++top]=c-'0';
    else
    {
        op1=stack[top--];
        op2=stack[top--];
        switch(c)
        {
            case '+': res=op1+op2;
                break;
            case '-':res=op1-op2;
               break;
            case '*':res=op1*op2;
              break;
            case '/':res=op1/op2;
              break;
            default: printf("invalid option");
            exit(0);
        }
        stack[++top]=res;
    }
}

if(top==0)
{
    printf("evauation is :%d\n",stack[top]);
}
else
printf("invalid\n");
return 0;
}
