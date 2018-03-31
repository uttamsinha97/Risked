#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

typedef struct node * NODEPTR;
NODEPTR displaylist(NODEPTR first);
NODEPTR allocatenode();
void deletenode(NODEPTR first);
NODEPTR insertend(NODEPTR first,int value);
NODEPTR deletefirst(NODEPTR first);


NODEPTR allocatenode()
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}

void deletenode(NODEPTR first)
{
    free(first);
}

NODEPTR insertend(NODEPTR first,int value)
{
    NODEPTR temp;
    NODEPTR cur;
    temp=allocatenode();
    temp->data=value;
    temp->link=NULL;

    if(first == NULL)
        return temp;

    cur=first;

    while(cur->link != NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}

NODEPTR deletefirst(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("list empty\ncannot delete\n");
        return first;
    }
    temp=first;
    first=first->link;
    printf("element deleted %d\n\n",temp->data);
    deletenode(temp);
    return first;
}

NODEPTR displaylist(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL )
    {
        printf("list empty\nnot much to show\n");
        return first;
    }
    temp=first;
    while( temp != NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
}

int main()
{
    NODEPTR first = NULL;
    int choice;
    int element;
    while(1)
    {
        printf("\n1 insert \n2 delete \n3 display \n4 exit");
        printf("enter choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("enter a value to insert");
            scanf("%d",&element);
            first=insertend(first,element);
            break;

            case 2 : printf("deleting element\n");
            first=deletefirst(first);
            break;

            case 3 : printf("displaying list\n\n");
            first=displaylist(first);
            break;

            case 4 :exit(1);
            break;
        }
    }
    return 0;
}
