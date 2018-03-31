#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int info;
    struct NODE *llink;
    struct NODE *rlink;
};
typedef struct NODE * NODEPTR;
NODEPTR insertfront(NODEPTR,int);
NODEPTR deletefirst(NODEPTR);
NODEPTR deletelast(NODEPTR );
NODEPTR insertend(NODEPTR,int);


NODEPTR getnode(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct NODE));
    return newborn;
}

void freenode(NODEPTR x)
{
    free(x);
}

NODEPTR insertfront(NODEPTR first,int value)
{
    NODEPTR temp;
    temp=getnode();
    temp->info=value;
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
        first=temp;
    else
    {
        temp->rlink=first;
        first->llink=temp;
    }
    return temp;
}

NODEPTR insertend(NODEPTR first,int value)
{
    NODEPTR temp,cur;
    temp=getnode();
    temp->info=value;
    temp->llink=temp->rlink=NULL;
    if(first==NULL)
        return temp;
    cur=first;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    return first;
}

NODEPTR deletefirst(NODEPTR first)
{
    NODEPTR temp;
    if(first==NULL)
    {
        printf("list is already empty\n\n");
        return first;
    }
    temp=first;
    first=first->rlink;
    printf("element deleted is %d\n\n",temp->info);
    freenode(temp);
    return first;
}

NODEPTR deletelast(NODEPTR first)
{
    NODEPTR temp;
    if(first==NULL)
    {
        printf("list is already empty\n\n");
        return first;
    }
    temp=first;
    while(temp->rlink->rlink!=NULL)
    {
        temp=temp->rlink;
    }
    printf("element deleted is %d\n\n",temp->rlink->info);
    freenode(temp->rlink);
    temp->rlink=NULL;
    //return first;
}
void displaydll(NODEPTR first)
{
    NODEPTR curr;
    int i;
        if(first==NULL)
    {
        printf("list is already empty\n\n");
        return first;
    }
    printf("contents of the dll are\n\n");
    curr=first;
    while(curr!=NULL)
    {
        printf("%d   ",curr->info);
        curr=curr->rlink;
    }
}

int main()
{
    NODEPTR first=NULL;
    int choice,val;
    for(;;)
    {
        printf("dequeue using dll\n");
        printf("\n1insert front\n2insert rear\n3delete front\n4delete rear\n5display\n6exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the element \n\n");
            scanf("%d",&val);
            first=insertfront(first,val);break;

            case 2: printf("enter the element to insert at last\n");
            scanf("%d",&val);
            first=insertend(first,val);break;

            case 3:first=deletefirst(first); break;

            case 4:first=deletelast(first);break;

            case 5:displaydll(first);break;

            case 6:exit(1);break;
        }
    }
}
