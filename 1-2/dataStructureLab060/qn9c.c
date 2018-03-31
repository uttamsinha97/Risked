#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int info,power;
	struct NODE *link;
};
typedef struct NODE* NODEPTR;
NODEPTR allocNode(void);
void ReleaseNode(NODEPTR);
NODEPTR insertAtEnd(NODEPTR, int);
void dispList(NODEPTR);

int main()
{
    int m,n,i;
    NODEPTR first = NULL;
    NODEPTR second = NULL;
    int valf,vals, iPos;
    printf("enter the degree of first polynomial\n\n");
    scanf("%d",&n);
    printf("enter the first polynomial\n\n");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&valf);
    first = insertAtEnd(first,valf);
    }
    printf("enter the degree of the second polynomial\n\n");
    scanf("%d",&m);
    printf("enter the second polynomial\n\n");

    for(i=1;i<=m;i++)
    {
        scanf("%d",&vals);
        second = insertAtEnd(second,vals);
    }

    printf("first polynomial is \n");
    dispList(first);
    printf("second polynomial\n\n");
    dispList(second);
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

void dispList(NODEPTR first)
{
	NODEPTR curr;
	int i=1;
	if(first == NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	curr = first;
	while(curr != NULL)
	{
		printf("%d ",curr->info);
		curr = curr->link;
	}
	printf("\n");
}

/*NODEPTR addpolynomial(NODEPTR first, NODEPTR second)
{
    NODEPTR z;
    z= first + second;
    return z;
}
*/

