#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * llink;
    struct node * rlink;
};
typedef struct node * NODEPTR;

NODEPTR allocation()
{
    NODEPTR n;
    n=(NODEPTR)malloc(sizeof(struct node));
    return n;
}
void deletenode(NODEPTR first)
{
    free(first);
}
NODEPTR insertfr(NODEPTR first,int e)
{
    NODEPTR temp;
    temp=allocation();
    temp->data=e;
    temp->llink=temp->rlink=NULL;
    if(first == NULL)
    {
        temp=first;
    }
    else
    {
        temp->rlink=first;
        first->llink=temp;
    }
    return temp;
}

NODEPTR insertrr(NODEPTR first,int e)
{
    NODEPTR temp;
    temp=allocation();
    temp->data=e;
    temp->llink=temp->rlink=NULL;
    if(first == NULL)
        return first;
    NODEPTR cur;
    cur=first;
    while(cur != null)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;

    return first;
}

