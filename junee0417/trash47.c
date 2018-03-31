#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;

};

typedef struct node * NODEPTR;

NODEPTR allocate()
{
    NODEPTR newborn;
    newborn=(struct node *)malloc(sizeof(struct node));
    return newborn;
}

void delnode(NODEPTR first)
{
    free(first);
}

NODEPTR insertlast(NODEPTR first , int ele)
{
    NODEPTR temp,cur;
    temp=allocate();
    temp->data=ele;
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




NODEPTR deletefirst(NODEPTR first)
{
    NODEPTR temp;
    temp=first;
    first=first->next;
    printf("element deleted is %d\n\n",temp->data);
    delnode(temp);
    return first;

}


void display(NODEPTR first)
{
    NODEPTR cur;
    cur=first;
    while(cur != NULL)
    {
        printf("%d   ",cur->data);
        cur=cur->next;
    }
}

int main()
{
    NODEPTR first = NULL;
    int choice;
    int e;
    for(;;)
    {
        printf("\n1insert\n2delete\n3display\n4exit");
        printf("enter choice\n\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("enter the element to insert\n\n");
            scanf("%d",&e);
            first=insertlast(first,e);
            break;

        case 2:
            first=deletefirst(first);
            break;

        case 3:
            display(first);
            break;

        case 4:
            exit(1);
            break;
        }
    }

    return 0;
}
