#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define MAX 10
//void initstack(struct stack *s);
//void push(struct stack *s,int item);
//int pop(struct stack *s);

struct stack
{
    int arr[MAX];
    int top;
};

int main()
{
    struct stack s;
    int i;
    initstack(&s);

    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);
    push(&s,60);
    push(&s,70);
    push(&s,80);
    push(&s,90);

    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);
    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);
    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);
    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);
    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);
    i=pop(&s);
    if(i!=NULL)
        printf("item popped is %i\n\n",i);

    return 0;
}
void initstack(struct stack *s)
{
    s->top=-1;
}
void push(struct stack *s,int item)
{
    if(s->top==MAX-1)
    {
        printf("stack is already full \n");
        return 1;
    }
    s->top++;
    s->arr[s->top]=item;
}
int pop(struct stack *s)
{
    int data;
    if(s->top==-1)
    {
        printf("stack is empty\n\n");
        return 2;
    }
    data=s->arr[s->top];
    s->top--;
    return data;
}
