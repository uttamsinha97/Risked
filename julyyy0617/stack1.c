#include<stdio.h>
#include<stdlib.h>

#define max1 20
void insertq();
void deleteq();
void displayq();

int q[max1];
int f= -1;

int main()
{
    int choice;
    while(1)
    {
        printf("\n1insert\n2delete\n3display\n4exit\n\n");
        printf("\nenter choice\n");
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
    int e;
    if(f == max1-1)
    {
        printf("\nqueue is full\n");
        return ;
    }
    else
    {

        printf("enter the element to insert\n\n");
        scanf("%d",&e);
        q[++f]=e;
     }
}

void deleteq()
{
    if(f== -1)
    {
        printf("queue empty . UNDERFLOW\n\n");
        return;
    }
    else
    {
        printf("\ndata deleted from queue is %d\n\n",q[f--]);
    }
}

void displayq()
{
    int i;
        if(f== -1 )
    {
        printf("queue empty . UNDERFLOW\n\n");
        return;
    }
    for(i=f;i>=0;i--)
        printf("%4d",q[i]);

}
