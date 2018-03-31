#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int arr[10];
    int top;
};
typedef struct stack STACK;
STACK s;
int main()
{
    int choice;
    int top;
    top=-1;
    while(1)
    {
        printf("\n1push\n2pop\n3display\n4exit\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
        }
    }
    return 0;
}

void push()
{
    int element;
    printf("enter element to be pushed\n\n");
    scanf("%d",&element);
    s.arr[s.top]=element;
    s.top++;
}
void pop()
{
    int data;
    data=s.arr[s.top];
    s.top--;
    printf("popped element is %d\n\n",data);
}
void display()
{
    int i;
    for(i=s.top;i>=0;i--)
        printf("%d  ",s.arr[i]);
}
