#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLEN 30

struct NODE
{
    char name[MAXLEN];
    struct NODE *link;
};
typedef struct NODE* NODEPTR;

NODEPTR insrear(NODEPTR,char []);
NODEPTR allocnode();

int main()
{
    NODEPTR last=NULL, cur,prev;
    int i, inum, spnum;
    char soldiername[MAXLEN];

    printf("\n enter the NUMBER of soldiers\n\n");
    scanf("%d",&inum);

    for(i=0;i<inum;i++)
    {
        printf("\n enter the name of soldier %i\n",i+1);
        scanf("%s",soldiername);
        last=insrear(last,soldiername);
    }
    printf("\n enter a value larger than 1 for counter\n");
    scanf("%d",&spnum);
    printf("\ncounter value is %d",spnum);
    cur=last->link;
    while(last->link != last)
    {
        for(i=0;i<spnum;i++)
        {
            prev=cur;
            cur=cur->link;
        }
        printf("\n eliminated soldier is %s\n",cur->name);
        if(last==cur)
            last=prev;
        prev->link=cur->link;
        releasenode(cur);
    }
    printf("\n soldier chosen to bring in reinforcement is %s\n",last->name);
    return 0;
}
NODEPTR insrear(NODEPTR last,char name[])
{
    NODEPTR temp,first;
    temp=allocnode();
    strcpy(temp->name,name);
    if(last ==NULL)
    {
        last=temp;
        temp->link=last;
        return last;
    }
    first=last->link;
    last->link=temp;
    temp->link=first;
    return temp;
}
NODEPTR allocnode()
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct NODE));
    if(newborn==NULL)
    {
        printf("\n insufficient heap memory\n");
        exit(1);
    }
    return newborn;
}
void releasenode(NODEPTR p)
{
    free(p);
}
