#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
 typedef struct node NODE;
NODE *PUSH(NODE *stack,int data)
{
    NODE *newnode=NULL;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("error in memeory allocation");
        return stack;
    }
    newnode->info=data;
    newnode->next=NULL;
    if(stack==NULL)
       stack=newnode;
    else
    {
        newnode->next=stack;
        stack=newnode;
    }
    return stack;
}
NODE  *POP(NODE *stack)
{
    NODE *first;
    int data;
    if(stack==NULL)
        printf("stack underflow\n");
    else
    {
        first=stack;
        stack=stack->next;
        data=first->info;
        printf("%d  is popped out",data);
        free(first);
    }
    return stack;
}
void DISPLAY(NODE *stack)
{

    NODE *first;
    first=stack;
    if(stack==NULL)
      printf("list empty\n");
    else
    {
        printf("top->: ");
        while(first!=NULL)
        {
            printf("%d",first->info);
            first=first->next;
            printf("\n\t");
        }
    }
}
int main()
{
    int data;
    NODE *stack=NULL;
    int ch;
    while(1)
    {
        printf("\n1push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter data: \n");
                    scanf("%d",&data);
                    stack=PUSH(stack,data);
                    break;
            case 2: stack=POP(stack);
            break;
            case 3: DISPLAY(stack);
            break;
            case 4: exit(0);
            break;
            default:printf("invalid choice\n");

        }
    }
    return 0;
}
