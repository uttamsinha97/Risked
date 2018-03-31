#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * llchild;
    struct node * rchild;
};
typedef struct node * NODEPTR;

NODEPTR al()
{
    NODEPTR n;
    n=(NODEPTR)malloc(sizeof(struct node));
    return n;
}

void del(NODEPTR first)
{
    free(first);
}

NODEPTR insertf(NODEPTR first,int ele)
{
    NODEPTR temp;
    temp=al();
    temp->data=ele;
    temp->llchild=temp->rchild=NULL;
    if(first == NULL)
    {
        first=temp;
    }
    else
    {
            temp->rchild=first;
            first->llchild=temp;
    }
    return temp;
}

NODEPTR insertr(NODEPTR first,int ele)
{
    NODEPTR temp;
    temp=al();
    temp->data=ele;
    temp->llchild=temp->rchild=NULL;
    if(first == NULL)

        return temp;

    NODEPTR cur;
    cur=first;
    while(cur->rchild != NULL)
    {
        cur=cur->rchild;
    }

    cur->rchild=temp;
    temp->llchild=cur;

    return first;

}

NODEPTR disp(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    while(temp != NULL)
    {
        temp=temp->rchild;
        printf("%4d",temp->data);
    }
    printf("\n\n");
}

int main()
{
    int choice ,e;
    NODEPTR first= NULL;
    for(;;)
    {
        printf("\n1insert front\n2insert rear\n3display\n4exit\n\nenter choice\n\n");
        scanf("%i",&choice);
        switch(choice)
        {
        case 1:
            printf("enter data \n");
            scanf("%i",&e);
            first=insertf(first,e);
            break;

        case 2:
            printf("enter data \n");
            scanf("%i",&e);
            first=insertr(first,e);
            break;

        case 3:
            disp(first);
            break;

        case 4:
            exit(1);
        }
    }
}
