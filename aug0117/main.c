#include <stdio.h>
#include <stdlib.h>

struct node

{
    int data;
    struct node * next;
};

typedef struct node * NODEPTR;

NODEPTR allocation()
{
    NODEPTR newborn;
    newborn=(NODEPTR)malloc(sizeof(struct node));
    return newborn;
}
void deletenode(NODEPTR first)
{
    free(first);
}

NODEPTR insertlast(NODEPTR first,int e)
{
    NODEPTR temp, cur;
    temp=allocation();
    temp->data=e;
    temp->next=NULL;
    if(first == NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    return temp;
}

NODEPTR deletelast(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("empty\n");
        return first;
    }
    temp=first;
    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }
    printf("element deleted is %d\n",temp->next->data);
    deletenode(temp->next);
    temp->next=NULL;
    return first;
}

void displaystack(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("empty\n");
        return ;
    }
    NODEPTR cur;
    cur=first;
    while(cur != NULL)
    {
        printf("%4d",cur->data);
        cur=cur->next;
    }
}

int main()
{
    int choice,ele;
    NODEPTR first = NULL;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter element to insert\n");
            scanf("%d",&ele);
            first=insertlast(first,ele);
            break;

        case 2:
            first=deletelast(first);
            break;

        case 3:
            displaystack(first);
            break;

        case 4:
            exit(1);
        }
    }
    return 0;
}
