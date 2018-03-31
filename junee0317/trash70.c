#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data ;
    struct node * next;
};

typedef struct node * NODEPTR ;

NODEPTR allocatenode ()
{
    NODEPTR temp;
    temp=(NODEPTR)malloc(sizeof(struct node));
    return temp;
}

void deletenode(NODEPTR first)
{
    free(first);
}

NODEPTR insertlast(NODEPTR first, int element)
{
    NODEPTR temp;
    NODEPTR cur;
    temp=allocatenode();
    temp->data=element;
    temp->next=NULL;
    if(first == NULL)
        return temp;
    cur=first;
    while( cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;

    return first;
}

NODEPTR pop(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    while(temp->next->next != NULL)
    {
       temp=temp->next;
    }
     printf("\n\npopped element %d   \n\n",temp->next->data);
    deletenode(temp->next);
    temp->next =NULL ;
    return first;
}

void display(NODEPTR first)
{
    NODEPTR cur;
    cur=first;
    printf("\n\n");
    while(cur != NULL)
    {
        printf("%d   ",cur->data);
        cur=cur->next;
    }

}

int main()
{
    NODEPTR first =NULL;
    int choice;
    int e;
    while(1)
    {
        printf("\n1push\n2pop\n3display\n4exit\n");
        printf("enter choicen\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            printf("enter the element to push onto the stack\n\n");
            scanf("%d",&e);
            first=insertlast(first,e);
            break;
        case 2:
            first=pop(first);
            break;
        case 3:
            display(first);
            break;
        case 4 :
            exit(1);
            break;
        }
    }
    return 0;
}
