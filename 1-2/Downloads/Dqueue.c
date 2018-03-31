#include<stdio.h>
#include<malloc.h>
struct node
{
int info;
struct node *lptr,*rptr;
};
typedef struct node NODE;
NODE *rear=NULL,*front=NULL;
void INS_L(int);
void INS_R(int);
void REM_L(void);
void REM_R(void);
void Display(void);
int main()
{
    int ch,data;
    while(1)
    {
        printf("\n1.INS_left 2.INS_right 3.REm_left 4.Rem_right 5.Display 6.exit\n ");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the data:");
                    scanf("%d",&data);
                    INS_L(data);
                    break;
            case 2:printf("\nEnter the data:");
                    scanf("%d",&data);
                   INS_R(data);
                   break;
            case 3:REM_L();
                    break;
            case 4:REM_R();
                    break;
            case 5:Display();
                break;
            case 6:exit(0);
            default:printf("Invalid choice\n");

        }
    }
}
void INS_L(int data)
{
    NODE *New;
    New=(NODE*)malloc(sizeof(NODE));
    New->info=data;
    New->rptr=NULL;
    New->lptr=NULL;
    if(front==NULL)
    {
        front=rear=New;

    }
    else
    {
        New->rptr=front;
        front->lptr=New;
        front=New;
    }
    printf("%d is inserted to Deque front  end\n",data);
}
void INS_R(int data)
{
    NODE *New;
    New=(NODE*)malloc(sizeof(NODE));
    New->info=data;
    New->rptr=NULL;
    New->lptr=NULL;
    if(rear==NULL)
    {
        front=rear=New;

    }
    else
    {
        New->lptr=rear;
        rear->rptr=New;
        rear=New;
    }
    printf("%d is inserted to Deque Rear  end\n",data);
}
void REM_L(void)
{
    NODE *temp;
    if(rear==NULL)
    {
        printf("Dequeue is Empty\n");
        return;
    }
    temp=front;
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        front=front->rptr;
        front->lptr=NULL;
    }
    printf("%d is delete from front end",temp->info);
    free(temp);
}
void REM_R(void)
{
    NODE *temp;
    if(rear==NULL)
    {
        printf("Dequeue is Empty\n");
        return;
    }
    temp=rear;
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        rear=rear->lptr;
        rear->rptr=NULL;
    }
    printf("%d is delete from REAR end\n",temp->info);
    free(temp);
}
void Display(void)
{
    NODE *temp;
    if(front==NULL)
    {
        printf("Dequeue is EMpty\n");
        return;
    }
    temp=front;
    printf("DEQUEUE contents are:\n FRONT->");
    while(temp!=NULL)
    {
        printf("%d  ",temp->info);
        temp=temp->rptr;
    }
    printf("->REAR\n");

}

