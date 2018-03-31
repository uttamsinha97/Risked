#include <stdio.h>
#include <stdlib.h>
#define max 10
typedef struct
{
    int stk[max];
    int top;
}STACK;

STACK s;


int main()
{
    s.top=-1;
    int choice;
    while(1)
    {
        printf("\n1push\n2pop\n3display\n4exit\n");
        printf("enter choice\n");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1 : push();break;
            case 2 : pop();break;
            case 3 : display();break;
            case 4 : exit(1);break;
            default : printf("invalid choice .\n");
        }
    }
}
int push()
{
    int data;
    if(s.top==max-1)
    {
        printf("stack full\n");
        return 2;
    }
    else
    {
        printf("enter the data \n");
        scanf("%i",&data);
        s.top++;
        s.stk[s.top]=data;
    }
}

int pop()
{
    if(s.top==-1)
    {
        printf("stack empty\n");
        return 2;
    }
    else
        printf("popped element is %i\n\n",s.stk[s.top--]);
}
int display()
{
    int i;
        if(s.top==-1)
    {
        printf("stack empty\n");
        return 2;
    }
    else
        for(i=0;i<=s.top;i++)
        printf("%i  ",s.stk[i]);
}
