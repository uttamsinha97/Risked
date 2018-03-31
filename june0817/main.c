#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int data;
    struct NODE *link;
};
typedef struct NODE * NODEPTR;



NODEPTR allocate(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR) malloc(sizeof(struct NODE));
    return newborn;
}
void releasenode(NODEPTR x)
{
    free(x);
}
NODEPTR insertfront(NODEPTR first, int value)
{
    NODEPTR temp;
    temp=allocate(void);
    temp->data=value;
    temp->link=first;
    return temp;
}
NODEPTR insertend(NODEPTR first ,int value)
{
    NODEPTR temp,cur;
    temp->data=value;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
