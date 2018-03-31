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
NODEPTR insertFront(NODEPTR, int);
NODEPTR insertAtEnd(NODEPTR, int);
NODEPTR deleteFirst(NODEPTR);
NODEPTR deleteRear(NODEPTR);
void dispList(NODEPTR);
NODEPTR insertAtPos(NODEPTR, int, int);
NODEPTR reverseList(NODEPTR);

int main()
{
    NODEPTR first = NULL;
    int iChoice, iVal, iPos;

	for(;;)
	{
		printf("\nLIST OPERATIONS\n");
		printf("====================");
		printf("\n0.Insert Front\n1.Insert Rear\n2.Delete Front\n3.Delete Rear\n4.Display\n5.Insert at Position\n6.Reverse List\n7.Exit\n");
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

			case 5: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				printf("\nEnter position at which element is to be inserted\n");
				scanf("%d",&iPos);
				first = insertAtPos(first,iVal,iPos);
				break;

			case 6: first = reverseList(first);
                break;

			case 7: exit(0);
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

	temp = allocNode();	
	temp->info = value;
	temp->link = first;
  	return temp;
	
}

//first = insertAtEnd(first,iVal);
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
	first = first->link;

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

	printf("\nThe contents of the list are :\n");
	printf("\tAddress\t\tValue\tNextAddress");
	curr = first;
	while(curr != NULL)
	{
		printf("\nNode %d\t%p\t%3d\t%p",i++,curr,curr->info,curr->link);
		curr = curr->link;
	}
	printf("\n");
}

NODEPTR insertAtPos(NODEPTR first, int value, int pos)
{
	NODEPTR temp,prev,cur;
	int count;

	temp = allocNode();
	temp->info = value;
	temp->link = NULL;

	if(first == NULL && pos == 1)
	return temp;

	if(first == NULL)
	{
		printf("\nInvalid Position!!!\n");
		return first;
	}

	if(pos == 1)
	{
		temp->link = first;
		return temp;
	}
	count = 1;
	prev = NULL;
	cur = first;

	while(cur != NULL && count != pos)
	{
		prev = cur;
		cur = cur->link;
		count++;
	}

	if(count == pos)
	{
		prev->link = temp;
		temp->link = cur;
		return first;
	}

	printf("\nInvalid Position!!!\n");
	return first;
}

NODEPTR reverseList(NODEPTR first)
{
/*    NODEPTR cur,temp;*/
/*    NODEPTR newlist = NULL;*/
/*    cur = first;*/
/*    while(cur != NULL)*/
/*    {*/
/*        temp = allocNode();*/
/*        temp->info = cur->info;*/
/*        temp->link = newlist;*/
/*        newlist = temp;*/
/*        cur = cur->link;*/
/*    }*/
/*    return newlist;*/

    NODEPTR rev = NULL,temp;
	while(first!=NULL)
	{
		temp = first;
		first = first->link;
		temp->link = rev;
		rev = temp;
	}
	return rev;
}
