#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
typedef struct
{
    int stk[MAXSIZE];
    int top;
}STACK;

STACK s;

int main()
{

    s.top=-1;
    while(1)
    {
        int choice;
        printf("\n1push\n2pop\n3display\n4exit\n");
        printf("enter your choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3: display();break;
            case 4:exit(1);break;
            default : printf("incorrect input choice\n\n");
        }
    }
}
void push()
{
    int data;
    if(s.top==MAXSIZE-1)
    {
        printf("stack full,will overflow after this point\n");
        return 101;
    }
    else
    {
        printf("enter the number to be pushed onto the stack\n");
        scanf("%i",&data);
        s.top++;
        s.stk[s.top]=data;
    }
    return;
}
void pop()
{
    int data;
    if(s.top==-1)
    {
        printf("stack is empty\n");
        return 102;
    }
    else
    {
        data=s.stk[s.top];
        printf("popped element is %i\n",data);
        s.top--;
    }
    return data;
}
void display()
{
    int i;
    if(s.top==-1)
    {
        printf("stack is empty ,will underflow after this point\n");
        return 103;
    }
    else
    {
        printf("status of stack is\n");
        for(i=s.top;i>=0;i--)
            printf("%d   ",s.stk[i]);
    }
}
