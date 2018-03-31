#include <stdio.h>
#include <stdlib.h>
#define max 10
typedef struct
{
    int que[max];
    int front;
    int rear;
}QUEUE;
QUEUE q;
int main()
{
    int choice;
    q.front=-1;
    q.rear=-1;
    for(;;)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();break;
            case 2: delete();break;
            case 3: display();break;
            case 4: exit(1);break;
            default : printf("wrong input\n");
        }
    }
}
int insert()
{
    int data;
    if(q.rear==max-1)
    {
        printf("queue full\n");
        return 1;
    }
    else
    {
        printf("enter the data\n");
        scanf("%i",&data);
        q.rear++;
        q.que[q.rear]=data;
    }
}
int delete()
{
    if(q.rear==-1)
    {
        printf("queue empty\n");
        return 2;
    }
    else
    {
        printf("element removed is %i\n\n",q.que[++q.front]);
    }
}
int display()
{
    int i;
    if(q.rear==-1)
    {
        printf("queue is empty\n\n");
        return 3;
    }
    else
        for(i=q.front+1;i<=q.rear;i++)
            printf("%d  ",q.que[i]);
}
