#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int info;
	struct NODE *link;
};

typedef struct NODE* NODEPTR;

NODEPTR allocNode(void);
void ReleaseNode(NODEPTR);
NODEPTR insertAtEnd(NODEPTR, int);
NODEPTR deleteRear(NODEPTR);
void dispList(NODEPTR);

int main()
{
    NODEPTR first = NULL;
    int iChoice, iVal, iPos;

	for(;;)
	{
		printf("\nSTACK OPERATIONS\nusing singly linked list\n");
		printf("====================");
		printf("\n1.Insert\n2.Delete\n3display\n4Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{

			case 1: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				first = insertAtEnd(first,iVal);
				break;

			case 2: first = deleteRear(first);
				break;

			case 3: dispList(first);
				break;

            case 4: exit(0);
		}
	}

    return 0;
}


NODEPTR allocNode(void)
{
	NODEPTR newborn;
	newborn = (NODEPTR)malloc(sizeof(struct NODE));

	if(newborn == NULL)
	{
		printf("\nInsufficient Heap Memory");
		exit(0);
	}
	return newborn;
}

void ReleaseNode(NODEPTR x)
{
	free(x);
}

NODEPTR insertAtEnd(NODEPTR first, int value)
{
	NODEPTR temp,cur;

	temp = allocNode();
	temp->info = value;
	temp->link = NULL;

    if(first == NULL)
      	return temp;

    cur = first;
    while(cur->link != NULL)
    {
            cur = cur->link;
    }
    cur->link = temp;
    return first;
}

NODEPTR deleteRear(NODEPTR first)
{
    NODEPTR temp;
	if(first == NULL)
	{
		printf("\nList is empty cannot delete\n");
		return first;
	}
	temp = first;
	while(temp->link->link!= NULL)
	{
		temp = temp->link;
	}

	printf("\nElement deleted is %d \n",temp->link->info);
	ReleaseNode(temp->link);
	temp->link = NULL;

	return first;
}

void dispList(NODEPTR first)
{
	NODEPTR curr;
	int i=1;
	if(first == NULL)
	{
		printf("\nList is empty\n");
		return;
	}

	printf("\nThe contents of the STACK are :\n");
	curr = first;
	while(curr != NULL)
	{
		printf("\n%d",curr->info);
		curr = curr->link;
	}
	printf("\n");
}
