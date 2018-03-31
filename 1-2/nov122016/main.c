#include <stdio.h>
#include <stdlib.h>

//stack as a linked list

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int i;
    struct node *s=NULL;

    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    push(&s,6);
    push(&s,7);
    push(&s,8);

    i=pop(&s);printf("popped element is %d\n",i);
    i=pop(&s);printf("popped element is %d\n",i);
    i=pop(&s);printf("popped element is %d\n",i);
    i=pop(&s);printf("popped element is %d\n",i);

   delstack(&s);

    return 0;
}

void push(struct node **top,int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    if(temp=NULL)
        printf("stack is full\n\n");
    temp->data=item;
    temp->link=*top;
    *top=temp;
}

int pop(struct node **top)
{
    struct node *temp;
    int item;
    if(*top==NULL)
    {
        printf("stack is empty\n\n");
        return NULL;
    }
    temp=*top;
    item=temp->data;
    *top=(*top)->link;
    return item;
}

void delstack(struct node **top)
{
    struct node *temp;
    if (*top==NULL)
        return;
    while(*top!=NULL)

    {
        temp=*top;
        *top=(*top)->link;
        free(temp);
    }
}
