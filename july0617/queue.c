#include<stdio.h>
#include <stdlib.h>
#define max 20

int q[max];
int r=-1;
int f=-1;

void insertq();
void deleteq();
void displayq();
int main()
{
    int choice ;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n");
        printf("insert choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertq();
            break;

        case 2:
            deleteq();
            break;

        case 3:
            displayq();
            break;

        case 4:
            exit(1);
        }
    }
    return 0;
}

void insertq()
{
    int el;
    if( r == max-1 )
    {
        printf("queue full\n\n");
        return;
    }
    else
    {
        if( f == -1)
            f=0;
        printf("enter the element to insert\n\n");
        scanf("%d",&el);
        r++;
        q[r]=el;
    }
}

void deleteq()
{
    if( f == -1 || f>r)
    {
        printf("\nqueue underflow\n");
        return ;
    }
    printf("element deleted is %d\n",q[f]);
    f=f+1;
}

void displayq()
{
    int i;
    if( f == -1 || f>r)
    {
        printf("\nqueue underflow\n");
        return ;
    }
    for(i=f;i<=r;i++)
        printf("%4d",q[i]);
}
