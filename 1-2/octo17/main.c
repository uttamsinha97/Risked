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
    int choice;
    while (1)
    {
        printf("\n1push\n2pop\n3display\n4exit\n\n");
        printf("enter your choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3:display();break;
            case 4:return 101;
        }
    }
}
void push()
{
    int data;
    if(s.top==(MAXSIZE-1))
    {
        printf("stack is full\n\n");
        return 102;
    }
    else
    {
        printf("enter the element to be pushed\n\n");
        scanf("%i",&data);
        s.top=s.top+1;
        s.stk[s.top]=data;
    }
    return ;
}
int pop()
{
    int num;
    if(s.top==-1)
    {
        printf("stack is empty\n\n");
        return 102;
    }
    else
    {
        num=s.stk[s.top];
        printf("poppped element is %d\n\n",num);
        s.top--;
    }
    return num;
}
void display()
{
    int i;
    if(s.top==-1)
    {
        printf("stack is empty\n\n");
        return;
    }
    else
    {
        printf("stack is \n\n");
        for(i=s.top;i>0;i--)
        {
            printf("%d  ",s.stk[i]);
        }
    }
}
