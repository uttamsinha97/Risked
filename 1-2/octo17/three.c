#include <stdio.h>
#define MAX 10
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4quit\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();break;
            case 2:delete();break;
            case 3:display();break;
            case 4:exit(1);
            default:printf("invalid choice\n\n");
        }
    }
}
insert()
{
    int data;
    if(rear==MAX-1)
    {
        printf("queue overflow\n\n");
        return;
    }
    else
    {
        if(front==-1)
        front=0;
        printf("enter the data to be entered\n\n");
        scanf("%d",&data);
        rear++;
        queue_array[rear]=data;
    }
}
delete()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow\n\n");
        return;
    }
    else
    {
        printf("element deleted is %d\n\n",queue_array[front]);
        front++;
    }
}
display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty\n\n");
        return;
    }
    else
    {
        printf("queue is \n\n");
        for(i=front;i<=rear;i++);
        printf("%d  ",queue_array[i]);
    }
}
