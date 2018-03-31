#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int info;
	struct NODE *link;
};

typedef struct NODE* NODEPTR;
NODEPTR deleteAtPos(NODEPTR first,int pos);
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
		printf("\n0.Insert Front\n1.Insert Rear\n2.Delete Front\n3.Delete Rear\n4.Display\n5.Insert at Position\n6.Reverse List\n7.Exit\n8.del at pos\n");
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
			case 8:
				printf("\nEnter position at which element is to be deleted\n");
				scanf("%d",&iPos);
				first = deleteAtPos(first,iPos);
				break;

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
NODEPTR insertFront(NODEPTR last, int value)
{
	NODEPTR temp;

	temp = allocNode();
	temp->info = value;
	if(last==NULL)
	last=temp;
	else
        temp->link = last->link;

	last->link=temp;

  	return last;

}

//first = insertAtEnd(first,iVal);
NODEPTR insertAtEnd(NODEPTR last, int value)
{
	NODEPTR temp,cur;

	temp = allocNode();
	temp->info = value;
	temp->link = NULL;

    if(last == NULL)
      	last=temp;
    else
        temp->link=last->link;

last->link=temp;

    return temp;
}

//first = deleteFirst(first);
NODEPTR deleteFirst(NODEPTR last)
{
    NODEPTR first;
	if(last == NULL)
	{
		printf("\nList is empty cannot delete\n");
		return NULL;
	}
	if(last->link==last)
	{
	    printf("\nElement deleted is %d \n",last->info);
        ReleaseNode(last);
        return NULL;

	}
	first = last->link;
	last->link = first->link;

	printf("\nElement deleted is %d \n",first->info);
	ReleaseNode(first);

	return last;
}

NODEPTR deleteRear(NODEPTR last)
{
    NODEPTR prev;
	if(last == NULL)
	{
		printf("\nList is empty cannot delete\n");
		return NULL;
	}
	if(last->link==last)
	{
	    printf("\nElement deleted is %d \n",last->info);
        ReleaseNode(last);
        return NULL;

	}
	prev=last->link;
	while(prev->link!=last)
            prev=prev->link;

    prev->link=last->link;
    printf("\nElement deleted is %d \n",last->info);
    ReleaseNode(last);
	return prev;
}

void dispList(NODEPTR last)
{
	NODEPTR curr;
	int i=1;
	if(last == NULL)
	{
		printf("\nList is empty\n");
		return;
	}

	printf("\nThe contents of the list are :\n");
	printf("\tAddress\t\tValue\tNextAddress");
	curr = last->link;
	while(curr!= last)
	{
		printf("\nNode %d\t%p\t%3d\t%p",i++,curr,curr->info,curr->link);
		curr = curr->link;
	}
	printf("\nNode %d\t%p\t%3d\t%p",i++,last,last->info,last->link);
	printf("\n");
}

NODEPTR insertAtPos(NODEPTR last, int value, int pos)
{
	NODEPTR temp,prev,cur;
	int count;

	temp = allocNode();
	temp->info = value;
	temp->link = NULL;
    if(last == NULL && pos == 1)
    {
        last=temp;
        last->link=temp;
        return last;
    }
    if(last == NULL)
	{
		printf("\nInvalid Position!!!\n");
		return last;
	}
if(pos == 1)
	{
		temp->link = last->link;
		last->link=temp;
		return last;
	}

	count = 1;
	prev = NULL;
	cur = last->link;
	while(cur != last && count != pos)
	{
		prev = cur;
		cur = cur->link;
		count++;
	}

	if(count == pos&&cur!=last)
	{
		prev->link = temp;
		temp->link = cur;
		return last;
	}
	else
	{
            temp->link=last->link;
            last->link=temp;
            return temp;

	}

	printf("\nInvalid Position!!!\n");
	return last;
}


NODEPTR deleteAtPos(NODEPTR first,int pos)
{
	NODEPTR prev,cur;
	int count,len;
	if(first == NULL)
	{
		printf("\nempty list \tInvalid Position!!!\n");
		return first;
	}
    count = 1;
	prev = NULL;
	cur = first;
	if(pos == 1)
	{
		first=first->link ;
		printf("\nElement deleted is %d \n",cur->info);
        ReleaseNode(cur);

	    return first;
	}
len=0;
while(cur!=NULL)
{
    cur=cur->link;
    len++;
}
if(pos>len || pos<0)
printf("\n Invalid position");
cur = first;
while(cur != NULL && count!=pos && pos<=len)
	{
		prev = cur;
		cur = cur->link;
		count++;
	}

	if(count == pos)
	{
		prev->link = cur->link;
		printf("\nElement deleted is %d \n",cur->info);
        ReleaseNode(cur);

	}



	return first;
}
