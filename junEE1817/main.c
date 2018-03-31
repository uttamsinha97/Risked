#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node * nodeptr;

nodeptr allocatenode()
{
    nodeptr newborn;
    newborn=(nodeptr)malloc(sizeof(struct node));
    return newborn;
}

void deletenode(nodeptr first)
{
    free(first);
}

nodeptr insertlast(nodeptr first, int element)
{
    nodeptr temp;
    nodeptr cur;
    temp=allocatenode();
    temp->data=element;
    temp->next=NULL;
    if(first == NULL)
        return temp;
    cur=first;
    while(cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    return first;
}

nodeptr deletelast(nodeptr first)
{
    nodeptr temp;
    if(first == NULL)
    {
        printf("already empty\n\n");
        return first;
    }
    temp=first;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    printf("%d  ",temp->data);
    deletenode(temp->next);
    temp->next=NULL;
    return first;
}

nodeptr display(nodeptr first)
{
    nodeptr temp;
    if(first == NULL)
    {
        printf("already empty\n\n");
        return;
    }
    temp=first;
    while(temp != NULL)
    {
        printf("%d   ",temp->next->data);
        temp=temp->data;
    }
    printf("\n\n");
}

int main()
{
    nodeptr first=NULL;
    int choice;
    int ele;
    while(1)
    {
        printf("\n\n\n1insert\n2delete\n3display\n4exit\n\n");
        printf("enter your choice\n\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            printf("enter the element to insert\n\n");
            scanf("%d",&ele);
            first=insertlast(first,ele);
            break;
        case 2:
            first=deletelast(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(1);

        }

    }
    return 0;
}
