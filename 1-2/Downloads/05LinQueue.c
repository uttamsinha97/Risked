#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

void fnEnQueue(int [], int*, int);
int fnDeQueue(int[], int*, int*);file:///media/hdk/2014-15/ODD/DS/ds-programs%20practice/05LinQueue.c

void fnDisplay(int[], int*, int*);
bool fnQFull(int*);
bool fnQEmpty(int*, int*);

int main()
{
    int iChoice, iVal;
    int myQueue[MAX];
    int iFront = 0;
    int iRear = -1;
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
                        if(fnQFull(&iRear))
                            printf("\nQueue is full\n");
                        else
                        {
                            printf("\nEnter the element to be inserted\n");
                            scanf("%d", &iVal);
                            fnEnQueue(myQueue, &iRear, iVal);
                        }
                        break;

			case 2:
                        if(fnQEmpty(&iFront, &iRear))
                            printf("\nQueue is empty\n");
                        else
                        {
                            iVal = fnDeQueue(myQueue, &iFront, &iRear);
                            printf("\nElement Deleted is : %d\n", iVal);
                        }
                        break;

			case 3:
                        if(fnQEmpty(&iFront, &iRear))
                            printf("\nQueue is empty\n");
                        else
                        {
                            printf("\nThe elements in the Queue are\n");
                            fnDisplay(myQueue, &iFront, &iRear);
                        }
                        break;

			case 4: exit(0);

			default: printf("\nWrong Choice\n");
		}
	}
    return 0;
}

void fnEnQueue(int q[], int *r, int val)
{
    *r = *r + 1;
    q[*r] = val;
}

int fnDeQueue(int q[], int *f, int *r)
{
    int val;
    val = q[*f];
    if(*r == *f)
    {
        *r = -1;
        *f = 0;
    }
    else
    {
        *f = *f + 1;
    }
    return val;
}

void fnDisplay(int q[], int *f, int *r)
{
    int i;
    for(i=*f; i<=*r; i++)
    {
        printf("%d\t",q[i]);
    }
    printf("\n\n");
}

bool fnQFull(int *r)
{
    if(*r == MAX-1)
        return true;
    else
        return false;
}

bool fnQEmpty(int *f, int *r)
{
    if(*f > *r)
        return true;
    else
        return false;
}
