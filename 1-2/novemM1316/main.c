#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int info;
    struct NODE *link;
};
typedef struct NODE* NODEPTR;

NODEPTR allocnode(void);
void releasenode(NODEPTR);
NODEPTR insertatend(NODEPTR,int);
NODEPTR deletefirst(NODEPTR);
void displaylist(NODEPTR);
NODEPTR insertatpos(NODEPTR,int,int);
NODEPTR reverselist(NODEPTR);

int main()
{
    NODEPTR first=NULL;
    int choice,val,pos;
    while(1)
    {
        printf("\n1insert end\n2 delete front \n3insert a node\n4display \n5reverse \n6exit\n\n");
        printf("enter your choice\n\n");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1: printf("enter the element to be inserted\n\n");
            scanf("%i",&val);
            first=insertatend(first,val);
            break;
            case 2: first=deletefirst(first);
            break;
            case 3:printf("enter the element to be inserted\n");
            scanf("%d",&val);
            printf("enter the position to insert the element\n");
            scanf("%i",&pos);
            first=insertatpos(first,val,pos);
            break;
            case 4: displaylist(first);
            break;
            case 5: reverselist(first);
            break;
            case 6: exit(1);
        }
    }
    return 0;
}
NODEPTR allocnode(void)
{
    NODEPTR new;
    new=(NODEPTR)malloc(sizeof(struct NODE));
}
