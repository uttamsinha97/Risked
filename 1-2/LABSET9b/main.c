#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
 typedef struct node NODE;
int n;
NODE *INSERT(NODE *start,int data)
{
    NODE *newnode=NULL,*first;
    first=start;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->info=data;
    newnode->next=NULL;
    if(start==NULL)
       start=newnode;
    else
       {
         while(first->next!=NULL)
               first=first->next;
               first->next=newnode;

       }
       n++;
       return start;
}
NODE* DELETE(NODE *start)
{
    NODE *first;
    int data;
    if(start==NULL)
    {
        printf("\n QUEUE underflow\n");
        return start;
    }
    else
    {
        first=start;
        start=start->next;
        data=first->info;
        printf("%d data is deleted",data);
        free(first);
    }

    return start;
}
void DISPLAY(NODE *start)
{

    NODE *first;
    first=start;
    if(start==NULL)
      printf("EMPTY SLIST\n");
    else
    {
        printf("QUEUE ITEMS:\n");
        while(first!=NULL)
        {
            printf("\t%d\t",first->info);
            first=first->next;
        }
    }
}
int main()
{
    int data;
    NODE *start=NULL;//queue
    int ch;
    while(1)
    {
        printf("\n1INSERT\n2.DELETE\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter data: \n");
                    scanf("%d",&data);
                    start=INSERT(start,data);
                    break;
            case 2: start=DELETE(start);
            break;
            case 3: DISPLAY(start);
            break;
            case 4: exit(0);
            break;
            default:printf("invalid choice\n");

        }
    }
    return 0;
}
