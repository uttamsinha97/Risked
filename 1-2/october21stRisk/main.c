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
NODEPTR deleteFirst(NODEPTR);
void dispList(NODEPTR);
NODEPTR insertAtPos(NODEPTR, int, int);
NODEPTR reverseList(NODEPTR);
int main()
{
    NODEPTR first = NULL;
    int iChoice, iVal, iPos;
    while(1)
	{
		printf("\nLIST OPERATIONS\n");
		printf("====================");
		printf("\n1.Insert end\n2.Delete Front\n3.Insert a node at specified Position\n4.Display\n5.Reverse List\n6.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
		    case 1: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				first = insertAtEnd(first,iVal);
				break;
            case 2: first = deleteFirst(first);
				break;
            case 3: printf("\nEnter Element to be inserted\n");
				scanf("%d",&iVal);
				printf("\nEnter position at which element is to be inserted\n");
				scanf("%d",&iPos);
				first = insertAtPos(first,iVal,iPos);
				break;
            case 4: dispList(first);
				break;
            case 5: first = reverseList(first);
                break;
            case 6: exit(0);
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
		printf("\nInsufficient Memory");
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
void dispList(NODEPTR first)
{
	NODEPTR curr;
	int i=1;
	if(first == NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	printf("\n\nThe contents of the list are :\n\n");
	curr = first;
	while(curr != NULL)
	{
		printf("\nNode %d\t%3d\t",i++,curr->info);
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

