#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * llink;
    struct node * rlink;
};

typedef struct node * NODEPTR;


NODEPTR allo()
{
    NODEPTR n;
    n=(NODEPTR)malloc(sizeof(struct node));
    return n;
}
void deleted(NODEPTR first)
{
    free(first);
}

NODEPTR insertf(NODEPTR first,int e)
{
    NODEPTR temp;
    temp=allo();
    temp->data=e;
    temp->llink=temp->rlink=NULL;
    if(first == NULL)
    {
        first=temp;
    }
    else
    {
        temp->rlink=first;
        first->llink=temp;
    }
    return temp;
}

NODEPTR insertr(NODEPTR first,int e)
{
    NODEPTR temp;
    temp=allo();
    temp->data=e;
    temp->llink=temp->rlink=NULL;
    if(first == NULL)
    {
        return temp;
    }
    NODEPTR cur;
    cur=first;
    while(cur->rlink != NULL)
    {
        cur=cur->rlink;
    }

    cur->rlink=temp;
    temp->llink=cur;
    return first;
}

NODEPTR displayd(NODEPTR first)
{
    NODEPTR cur;
    cur=first;
    while(cur != NULL)
    {
        printf("%5d",cur->data);
        cur=cur->rlink;
    }
    printf("\n");
}
NODEPTR deletef(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    first=first->rlink;
    printf("element deleted is %d\n",temp->data);
    deleted(temp->rlink);
    temp->rlink = NULL;
    return first;

}

NODEPTR deleter(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    while(temp->rlink->rlink != NULL)
    {

        temp=temp->rlink;
    }
    printf("element deleted is %d\n",temp->rlink->data);
    deleted(temp->rlink);
    temp->rlink=NULL;

    return first;
}

int main()
{
    NODEPTR first = NULL;
    int choice , ele;

    for(;;)
    {
        printf("\n1insert front\n2insert rear\n3display\n4exit\n5delete first\n6delete rear\n\n");
        printf("\nenter choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\ninsert element\n");
            scanf("%i",&ele);
            first=insertf(first,ele);
            break;

        case 2:
            printf("\nenter element\n");
            scanf("%i",&ele);
            first=insertr(first,ele);
            break;

        case 3:
            displayd(first);
            break;

        case 4:
            exit(1);
            break;

        case 5:
            first=deletef(first);
            break;

        case 6:
            first=deleter(first);
            break;
        }
    }
}
