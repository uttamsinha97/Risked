#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int stk[5];
    int top;
};
typedef struct stack STACK;
STACK s;

void push();
void pop();
void display();

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
        case 1:
            printf("push operation\n\n");
            push();
            break;
        case 2:
            printf("pop operation\n\n");
            pop();
            break;
        case 3:
            printf("display\n\n");
            display();
            break;
        case 4:
            exit(1);
        }
    }
    return 0;
}
void push()
{
    int element;
    if(s.top==5)
    {
        printf("stack is full");
        return ;
    }
    printf("enter the element to be pushed\n");
    scanf("%d",&element);
    (s.top)++;
    s.stk[s.top]=element;
}

void pop()
{
    int data;
    if(s.top==-1)
    {
        printf("stack is empty\n\n");
        return;
    }
    data=s.stk[s.top];
    (s.top)--;
    printf("poppped element is %i\n\n",data);
}

void display()
{
    int i;
    if(s.top==-1)
    {
        printf("stack is empty\n\n");
        return;
    }
    for(i=s.top;i>=0;i--)
    {
        printf("%i  ",s.stk[i]);
    }

}
