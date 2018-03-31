#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
};

typedef struct node * NODEPTR ;

NODEPTR allocatenode()
{
    NODEPTR newborn ;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}

void deletenode(NODEPTR first)
{
    free(first);
}

NODEPTR insertlast(NODEPTR first , int value)
{
    NODEPTR temp;
    NODEPTR cur;
    temp=allocatenode();
    temp->data=value;
    temp->link=NULL;
    if(first == NULL)
        first = temp;

    cur=first;
    while(cur->link != NULL)
    {
         cur=cur->link;
    }
    cur = temp;
    return first;

}

NODEPTR deletelast(NODEPTR first)
{
    NODEPTR temp;

    if( first == NULL)
    {
        printf("list already empty\n\n");
    }

}
