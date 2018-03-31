#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
int queuea[MAXSIZE];
int rear=-1;
int front =-1;
int main()
{
    int choice;
    while(1);
    {
        printf("\n1inser\n2delete\n3display\4exit\n");
        printf("eneter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();break;
            case 2: delete();break;
            case 3: display();break;
            case 4: exit(1);break;
            default : printf("invalid choice \n\n");
        }
    }
}
insert ()
{
    int data;
    if (rear==MAXSIZE-1)
        printf("queue overflow\n\n");
    else
    {
        if(front==-1)
            front=0;
        printf("insert element in queue\n\n");
        scanf("%d",&data);
        rear++;
        queuea[rear]=data;
    }
}
