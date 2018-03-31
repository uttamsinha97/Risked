#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3

typedef struct
{
	int front, rear;
	int items[MAX];
}queue_t;

void fnEnQueue(queue_t*, int);
int fnDeQueue(queue_t*);
void fnDisplay(queue_t);
bool isQEmpty(queue_t);
bool isQFull(queue_t);


int main()
{
    int iChoice, iVal;
    queue_t myqueue;
    myqueue.front = -1;
    myqueue.rear = -1;
    for(;;)
	{
        printf("\nQueue Operations\n");
        printf("=====================");

		printf("\n1.Qinsert\n2.Qdelete\n3.Qdisplay\n4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1:
                        if(isQFull(myqueue))
                            printf("\nQueue is full\n");
                        else
                        {
                            printf("\nEnter the element to be inserted\n");
                            scanf("%d", &iVal);
                            fnEnQueue(&myqueue, iVal);
                        }
                        break;

			case 2:
                        if(isQEmpty(myqueue))
                            printf("\nQueue is empty\n");
                        else
                         {
                            iVal = fnDeQueue(&myqueue);
                            printf("\nElement Deleted is : %d\n", iVal);
                        }
                        break;

			case 3:
                        if(isQEmpty(myqueue))
                            printf("\nQueue is empty\n");
                        else
                        {
                            printf("\nThe elements in the Queue are\n");
                            fnDisplay(myqueue);
                        }
                        break;

			case 4: exit(0);

			default: printf("\nWrong Choice\n");
		}
	}
    return 0;
}

void fnEnQueue(queue_t *pq, int val)
{
    if(pq->rear==-1 && pq->front==-1)
    {
        pq->rear=0;pq->front=0;
    }
     else
          (pq->rear)++;
    pq->items[pq->rear] = val;
}

int fnDeQueue(queue_t *pq)
{
    int val;
    val = pq->items[pq->front];
    if(pq->rear == pq->front)
    {
        pq->rear = -1;
        pq->front = -1;
    }
    else
    {
        (pq->front)++;
    }
    return val;
}

void fnDisplay(queue_t myq)
{
    int i;
    for(i=myq.front;i<=myq.rear;i++)
		printf("%d\t",myq.items[i]);
}

bool isQEmpty(queue_t myq)
{
    if(myq.front==-1)

        return true;
    else
        return false;
}

bool isQFull(queue_t myq)
{
    if(myq.rear == MAX-1)
        return true;
    else
        return false;
}
