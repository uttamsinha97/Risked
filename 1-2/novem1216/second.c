#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 3

typedef struct
{
    int front,rear;
    int items[MAX];
}queue_t;

bool isqempty(queue_t );
bool isqfull(queue_t );

int main()
{
    int ichoice,ival;
    queue_t myqueue;
    myqueue.front=-1;
    myqueue.rear=-1;

    for(;;)
    {
        printf("\n queue operations\n");
        printf("\n1insert\n2delete\n3display\n4exit\n");
        scanf("%d",&ichoice);
        switch(ichoice)
        {
            case 1: if(isqfull(myqueue))
            printf("\n queue is full\n");
            else
            {
                printf("\nenter the element to be inserted\n");
                scanf("%d",&ival);
                fnenque(&myqueue,ival);
            }
            break;

            case 2: if(isqempty(myqueue))
            printf("\nqueue is empty\n");
            else
            {
                ival=fndequeue(&myqueue);
                printf("element deleted is %i\n",ival);
            }
            break;

            case 3:
                if(isqempty(myqueue))
                printf("\nqueue is empty\n");
                else
                {
                    printf("the elements in the queue are as follows \n");
                    fndisplay(myqueue);
                }
                break;

                case 4: exit(1);

                default : printf("invalid choice\n");
        }
    }
    return 0;
}
void fnenque(queue_t *pq,int val)
{
    int j;
    if(pq->rear==-1 && pq->front==-1)
    {
        pq->front=0;
        pq->front=0;
        pq->items[pq->rear]=val;
        return;
    }
    j=pq->rear;
    while(j>=0 && val <pq->items[j])
    {
        pq->items[j+1]=pq->items[j];
        j--;
    }
    pq->items[j+1]=val;
    (pq->rear)++;
}

int fndequeue(queue_t *pq)
{
    int val;
    val=pq->items[pq->front];
    if(pq->rear == pq->front)
    {
        pq->rear=-1;
        pq->front=-1;
    }
    else
    {
        (pq->front)++;
    }
    return val;
}
void fndisplay(queue_t myq)
{
    int i;
    for(i=myq.front;i<=myq.rear;i++)
        printf("%d  ",myq.items[i]);
}
bool isqempty(queue_t myq)
{
    if(myq.front==-1)
        return true;
    else
        return false;
}
bool isqfull(queue_t myq)
{
    if(myq.rear==MAX-1)
        return true;
    else
        return false;
}
