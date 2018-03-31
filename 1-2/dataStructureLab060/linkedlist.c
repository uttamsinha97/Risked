#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
int n=0;
int main()
{
    void INS_END(void),DEL_FIRST(void);
    void REV_LIST(void),DISPLAY(void);
    int choice;
    while(1)
    {
        printf("\n1 INSERT ELEMENTS INTO LINKED LIST \n2 DELETE ELEMENTS FROM LINKED LIST \n3 REVERSE_LIST \n4 DISPLAY ELEMENTS OF LINKED LIST \n5 EXIT\n \n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: INS_END() ; break;
            case 2: DEL_FIRST() ; break;
            case 3: REV_LIST() ; break;
            case 4: DISPLAY() ; break;
            case 5: exit(0);
            default :
            printf("\nINVALID choice\n\n");
        }
    }

}
void INS_END(void)
{
    NODE *newnode,*first;
    int data;
    first=start;
    printf("\nenter the data\n\n");
    scanf("%d",&data);
    newnode=(NODE*)malloc(sizeof(NODE));
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
    printf("\n%d is inserted at the end of the list\n\n",data);
     printf("size of node is %d\n\n\n",sizeof(struct node));
     printf("size of node is %d\n\n\n",sizeof(NODE));
}
void DEL_FIRST(void)
{
        NODE *first;
        first=start;
        if(start==NULL)
        printf("\n empty list\n\n");
        else
        {
            start=first->next;
            n--;
            printf("\n%d is deleted from the start of the list\n\n",first->info);
            free(first);
        }
}
void REV_LIST(void)
{
    NODE *rev=NULL,*temp,*first;
    first=start;
    if(start==NULL)
    printf("\nempty list\n\n");
    else
    {
        while(first!=NULL)
        {
            temp=first;
            first=first->next;
            temp->next=rev;
            rev=temp;
        }
        start=rev;
        printf("\nlist is reversed\n");
        }
    }
    void DISPLAY(void)
    {
        NODE *first;
        first=start;
        if(start==NULL)
        printf("\nlist empty\n\n");
        else
        {
            printf("\nlist contents are\n\n");
            while(first!=NULL)
            {
                printf("%5d",first->info);
                first=first->next;
            }
        }

    }
