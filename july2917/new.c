#include<stdio.h>
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
    NODEPTR temp;
    temp=allocation();
    temp->data=e;
    temp->next=NULL;
    if(first == NULL)
    {
        return first;
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

void display1(NODEPTR first)
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
        printf("%d   ",temp->data);
        temp=temp->data;
    }
    printf("\n");
}


int main()
{
    NODEPTR first= NULL;
    int ele,choice;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the element to insert\n");
            scanf("%d",&ele);
            first=insertlast(first,ele);
            break;

        case 2:
            first=deletelast(first);
            break;

        case 3:
            display1(first);
            break;

        case 4:
            exit(1);
        }
    }
    return 0;
}
