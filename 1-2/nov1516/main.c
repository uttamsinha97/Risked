#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int info;
    struct NODE *llink;
    struct NODE *rlink;
};
typedef struct NODE * NODEPTR;

NODEPTR insertatend(NODEPTR first, int value);
NODEPTR insertatfront(NODEPTR first, int value);

int main()
{
    NODEPTR first=NULL;
    int choice,val;
    printf("\n1insert rear\n2insert front\n3delete rear\n4delete front\n5display\n6exit\n");
    for(;;)
    {
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("enter the element to be inserted at end\n");
            scanf("%i",&val);
            first=insertatend(first,val);
            break;

            case 2 : printf("enter the element to be inserted at front\n");
            scanf("%i",&val);
            first=insertatfront(first,val);
            break;

/*            case 3: first=deleterear(first);
            break'

            case 4:first=deletefirst(first);
            break;

            case 5:displaylist(first);
            break;
*/
            case 6:exit(1);
            break;
        }
    }
    return 0;
}

NODEPTR allocnode(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct NODE));
    return newborn;
}

void releasenode(NODEPTR x)
{
    free(x);
}

NODEPTR insertatfront(NODEPTR first, int value)
{
    NODEPTR temp;
    temp=allocnode();
    temp->info=value;
    temp->rlink=temp->llink=NULL;
    if(first=NULL)
        first=temp;
    else
    {
        temp->rlink=first;
        first->llink=temp;
        return temp;
    }
}
NODEPTR insertatend(NODEPTR first, int value)
{
    NODEPTR temp,cur;
    temp=allocnode();
    temp->info=value;
    temp->rlink=temp->llink=NULL;
    if(first==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->rlink != NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    return first;
}
