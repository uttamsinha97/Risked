#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct NODE * llink;
    struct NODE * rlink;
};

typedef struct NODE * NODEPTR1 ;


NODEPTR1 all()
{
    NODEPTR1 n;
    n=(NODEPTR1)malloc(sizeof(struct NODE));
    return n;
}

NODEPTR1 del(NODEPTR1 first)
{
    free(first);
}

NODEPTR1 insertf(NODEPTR1 first,int el)
{
    NODEPTR1 temp;
    temp=all();
    temp->data=el;
    temp->llink=temp->rlink=NULL;

    if(first == NULL)
    first=temp;
    else
    {
        temp->rlink=first;
        first->llink=temp;
    }
    return temp;
}

NODEPTR1 insertl(NODEPTR1 first,int el)
{
    NODEPTR1 temp;
    temp=all();
    temp->data=el;
    temp->llink=temp->rlink=NULL;
    if(first == NULL)
        return first;
    NODEPTR1 cur;
    cur=first;
    while(cur->rlink != NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;

    return first;
}

void dis(NODEPTR1 first)
{
    NODEPTR1 temp;
    temp=first;
    while(temp!= NULL)
    {
        printf("%4d",temp->data);
        temp=temp->rlink;
    }
}

int main()
{
    NODEPTR1 first=NULL;
    int choice,e;
    for(;;)
    {
        printf("\n1insert front\n2insert end\n3display\n4exit");
        printf("\nenter choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter element\n");
            scanf("%d",&e);
            first=insertf(first,e);
            break;

        case 2:
            printf("enter element\n");
            scanf("%d",&e);
            first=insertl(first,e);
            break;

        case 3:
            dis(first);
            break;

        case 4:
            exit(1);

        }
    }
    return 0;
}
