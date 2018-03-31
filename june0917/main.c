#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
};

typedef struct node * NODEPTR;


NODEPTR allocatenode(void)
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}
 void deletenode(NODEPTR x)
 {
     free(x);
 }

 void insertfront(NODEPTR first,int value)
 {
     NODEPTR temp;
     temp=allocatenode(void);
     temp->data=value;
     temp->llink=temp->rlink=NULL;
     if(first==null)
     {
         return temp;
     }
     temp->rlink=first;
     first->rlink=temp;
     return temp;
 }

 void insertend(NODEPTR first, int value)
 {
     NODEPTR temp;
     NODEPTR cur;
     temp=allocatenode(void);
     temp->data=value;
     temp->llink=NULL;
     temp->rlink=NULL;
     if(first==NULL)
     {
         return temp;
     }
     cur=first;
     while(cur->rlink != NULL)
     {
         cur=cur->rlink;
     }

     temp->llink=cur;
     cur->rlink=temp;
     return first;
 }
