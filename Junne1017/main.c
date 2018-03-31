#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
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
    if( first == NULL)
    {
        printf("list empty\ncannot delete\n\n");
        return first;
    }
    temp=first;
    first=first->link;
    printf("element deleted %d \n\n",temp->data);
    deletenode(temp);
    return first;
}

NODEPTR displaylist(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("list already empty\nnot much to display\n\n");
        return;
    }
    temp=first;
    while( temp != NULL)
    {
        printf(" %d  ",temp->data);
        temp=temp->link;
    }
}

int main()
{
    NODEPTR first=NULL;
    int choice;
    int element;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit");
        printf("\nenter choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("enter element to insert\n\n");
            scanf("%d",&element);
            first=insertend(first,element);
            break;

            case 2: first=deletefirst(first);
            break;

            case 3 : displaylist(first);
            break;

            case 4: exit(1);
            break;
        }
    }
    return 0;
}
