#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node * NODEPTR;


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

NODEPTR insertlast(NODEPTR first , int element)
{
    NODEPTR cur ;
    NODEPTR temp;
    cur=allocatenode();
    cur->data=element;
    cur->next=NULL;
    if(first == NULL)
        first=cur;

    temp=first;
    if(temp->next != NULL)
    {
        temp=temp->next;
    }


}
