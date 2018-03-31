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

NODEPTR insertlast(NODEPTR first, int element)
{
    NODEPTR temp;
    temp=allocation();
    temp->data=element;
    temp->next=NULL;
    if(first == NULL)
    {
        return temp;
    }
    NODEPTR cur;
    cur=first;
    while(cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    return first;
}

NODEPTR deletefirst(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("empty\n");
        return first;
    }
    temp=first;
    first=first->next;
    printf("element deleted is %d\n",temp->data);
    deletenode(temp);
    return first;
}

void displaystack(NODEPTR first)
{
    NODEPTR temp;
    if(first == NULL)
    {
        printf("empty\n");
        return first;
    }
    temp=first;
    while(temp != NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int choice,ele;
    NODEPTR first=NULL;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 : printf("enter element to insert\n");
        scanf("%d",&ele);
        first=insertlast(first,ele);
        break;

        case 2:
            first=deletefirst(first);
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
