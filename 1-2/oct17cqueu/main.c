
// Circular QOOO using Structure
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

typedef struct
{
	int front, rear;
	int items[MAX];
}cqueue_t;

void fnEnQueue(cqueue_t*, int);
int fnDeQueue(cqueue_t*);
void fnDisplay(cqueue_t);
bool isQEmpty(cqueue_t);
bool isQFull(cqueue_t);


int main()
{
    int iChoice, iVal;
    cqueue_t myqueue;
    myqueue.front = -1;
    myqueue.rear = -1;
    for(;;)
	{
        printf("\nQueue Operations\n");
        printf("=====================");

		printf("\n1.insert\n2.delete\n3.display\n4.Exit\n");
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

void fnEnQueue(cqueue_t *pq, int val)
{
	if(pq->front == -1)
		pq->front = pq->rear =0;
	else
		pq->rear = (pq->rear+1)%MAX;
    pq->items[pq->rear] = val;
}

int fnDeQueue(cqueue_t *pq)
{
    int val;
    val = pq->items[pq->front];
    if(pq->front == pq->rear)
    {
	    val = pq->items[pq->front];
        pq->rear = -1;
        pq->front = -1;
    }
    else
    {
        pq->front = (pq->front+1)%MAX;
    }
    return val;
}

void fnDisplay(cqueue_t myq)
{
    int i;
    if(myq.front <= myq.rear)
    {
		for(i=myq.front;i<=myq.rear;i++)
			printf("%d\t",myq.items[i]);
	}
	else
	{
		for(i=myq.front;i<=MAX-1;i++)
			printf("%d\t",myq.items[i]);
		for(i=0;i<=myq.rear;i++)
			printf("%d\t",myq.items[i]);
	}
	printf("\nQueue Front element = %d",myq.items[myq.front]);
	printf("\nQueue Rear element = %d",myq.items[myq.rear]);

}

bool isQEmpty(cqueue_t myq)
{
    if(myq.front == -1)
        return true;
    else
        return false;
}

bool isQFull(cqueue_t myq)
{
    if(myq.front == (myq.rear+1)%MAX)
        return true;
    else
        return false;
}
