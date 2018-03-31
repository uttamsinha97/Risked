#include <stdio.h>

struct node
{
    int data;
    struct node * link;

};
typedef struct node * NODEPTR1;

NODEPTR1 allo()
{
    NODEPTR1 newborn;
    newborn=(NODEPTR1)malloc(sizeof(struct node));
    return newborn;
}

void del(NODEPTR1 first)
{
    free(first);
}

NODEPTR1 insert1(NODEPTR1 first, int value)
{
    NODEPTR1 temp;
    NODEPTR1 cur;
    temp=allo();
    temp->data=value;
    temp->link=NULL;
    if(first == NULL)
        return first;

    cur=first;
    while(cur->link != NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
NODEPTR1 delete1(NODEPTR1 first);
{
    NODEPTR1 temp;
    if(first == NULL)
    {
        printf("list empty\n ");
        return;
    }
    temp=first;
    first=first->link;
    printf(" %d  ",temp->info);
    del(temp);
    return first;
}
void display1(NODEPTR1 first)
{
    NODEPTR1 cur;
    if(first == NULL)
    {
        printf()
    }
}
