#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int data;
    struct NODE *rlink;
    struct NODE *llink;
};
 typedef struct NODE *NODEPTR;

 int main()
 {
     NODEPTR first=NULL;

 }

 NODEPTR allocNode(void)
 {
     NODEPTR newborn;
     newborn =(NODEPTR)malloc(sizeof(struct NODE));
     if(newborn==NULL)
     {
         printf("memory allocation error\n");
         exit(1);
     }
     return newborn;
 }
  void ReleaseNode(NODEPTR x)
  {
      free(x);
  }


  NODEPTR insertfront(NODEPTR first, int value)
  {
      NODEPTR temp;
      temp=allocNode();
      temp->info=value;
      temp->rlink=temp->llink=NULL;
      if(first==NULL)
        first=temp;
      else
      {
          temp->rlink=first;
          temp->llinl=temp;
          return templ;
    }
 }

 NODEPTR insertAtEnd( NODEPTR first, int value)
 {
     NODEPTR temp,cur;
     temp=allocNode();
     temp->info=value;
     temp->llink=temp->rlink=NULL;
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

 NODEPTR deleteFirst(NODEPTR first)
 {
     NODEPTR temp;
     if(first == NULL)
     {
         printf("\n empty");
         return first;
     }
     temp=first;
     first=first->rlink;
     printf("&d    ",temp->info);
     ReleaseNode(temp);
     return first;
 }
