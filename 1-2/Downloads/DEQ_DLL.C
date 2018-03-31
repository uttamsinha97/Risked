#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int info;
	struct NODE *llink;
	struct NODE *rlink;
};

typedef struct NODE* NODEPTR;

NODEPTR allocNode(void);
void ReleaseNode(NODEPTR);
NODEPTR insertFront(NODEPTR, int);
NODEPTR insertAtEnd(NODEPTR, int);
NODEPTR deleteFirst(NODEPTR);
NODEPTR deleteRear(NODEPTR);
void dispList(NODEPTR);

int main()
{
    NODEPTR first = NULL;
    int iChoice, iVal, iPos;

	for(;;)
	{
		printf("\nDEQ using DLL OPERATIONS\n");
		printf("====================");
		printf("\n0.Insert Front\n1.Insert Rear\n2.Delete Front\n3.Delete Rear\n4.Display\n5.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 0: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				first = insertFront(first,iVal);
				break;

			case 1: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				first = insertAtEnd(first,iVal);
				break;

			case 2: first = deleteFirst(first);
				break;

			case 3: first = deleteRear(first);
				break;

			case 4: dispList(first);
				break;

			

			case 5: exit(0);
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


//first = insertFront(first,iVal);
NODEPTR insertFront(NODEPTR first, int value)
{
	NODEPTR temp;

	temp = allocNode();	//create new node
	temp->info = value;
	temp->rlink =temp->rlink = NULL;
	if(first==NULL)
	first=temp;
	else
	{
	    temp->rlink=first;
	    first->llink=temp;
	}
  	return temp;

}

//first = insertAtEnd(first,iVal);
NODEPTR insertAtEnd(NODEPTR first, int value)
{
	NODEPTR temp,cur;

	temp = allocNode();
	temp->info = value;
	temp->llink =temp->rlink = NULL;

    if(first == NULL)
      	return temp;

    cur = first;
    while(cur->rlink != NULL)
    {
            cur = cur->rlink;
    }
    cur->rlink = temp;
    temp->llink=cur;
    return first;
}

//first = deleteFirst(first);
NODEPTR deleteFirst(NODEPTR first)
{
    NODEPTR temp;
	if(first == NULL)
	{
		printf("\nList is empty cannot delete\n");
		return first;
	}
	temp = first;
	first = first->rlink;

	printf("\nElement deleted is %d \n",temp->info);
	ReleaseNode(temp);

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
	while(temp->rlink->rlink!= NULL)
	{
		temp = temp->rlink;
	}

	printf("\nElement deleted is %d \n",temp->rlink->info);
	ReleaseNode(temp->rlink);
	temp->rlink = NULL;

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

	printf("\nThe contents of the list are :\n");
	printf("\tAddress\t\tValue\tNextAddress");
	curr = first;
	while(curr != NULL)
	{
		printf("\nNode %d\t%p\t%3d\t%p",i++,curr,curr->info,curr->rlink);
		curr = curr->rlink;
	}
	printf("\n");
}

