#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *lptr,*rptr;
};
typedef struct node NODE;
NODE *rear=NULL,*front=NULL;
void INS_LEFT(int);
void INS_RIGHT(int);
void REM_LEFT(void);
void REM_RIGHT(void);
void DISPLAY(void);
int main()
{
 int choice,data;
 while(1)
 {
 printf("\n1:INSERT LEFT\n2:INSERT RIGHT\n3:REMOVE LEFT\n4:REMOVE RIGHT\n5:DISPLAY\n6:EXIT\n");
 printf("Enter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: printf("\nEnter the data to be inserted\n");
 scanf("%d",&data);
 INS_LEFT(data);
 break;
 case 2: printf("\nEnter the data to be inserted\n");
 scanf("%d",&data);
 INS_RIGHT(data);
 break;
 case 3: REM_LEFT();
 break;
 case 4: REM_RIGHT();
 break;
 case 5: DISPLAY();
 break;
 case 6: exit(0);
 default:printf("\nInvalid Choice\n");
 }
 }
}
void INS_LEFT(int data)
{
 NODE *newnode;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->info=data;
newnode->lptr=NULL;
newnode->rptr=NULL;
if(front==NULL)
{
 front=rear=newnode;
 }
else
{
 newnode->rptr=front;
 front->lptr=newnode;
 front=newnode;
 }
printf("\n%d is inserted to DEQUE from front end\n",data);
}
void INS_RIGHT(int data)
{
 NODE *newnode;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->info=data;
newnode->rptr=NULL;
newnode->lptr=NULL;
if(rear==NULL)
{
 front=rear=newnode;
 }
else
{
 newnode->lptr=rear;
 rear->rptr=newnode;
 rear=newnode;
 }
printf("\n%d is inserted to DEQUE from rear end\n",data);
}
void REM_LEFT(void)
{
 NODE *temp;
 if(front==NULL)
{
 printf("\nDEQUEUE EMPTY\n");
 return;
 }
temp=front;
if(front==rear)
 front=rear=NULL;
 else
{
 front=front->rptr;
 front->lptr=NULL;
 }
printf("\n%d is deleted from DEQUE from front end\n",temp->info);
free(temp);
}
void REM_RIGHT(void)
{
 NODE *temp;
 if(rear==NULL)
{
 printf("\nDEQUEUE EMPTY\n");
 return;
 }
temp=rear;
if(front
   ==rear)
 front=rear=NULL;
 else
{
 rear=rear->lptr;
 rear->rptr=NULL;
 }
printf("\n%d is deleted from DEQUE from rear end\n",temp->info);
free(temp);
}
void DISPLAY(void)
{
 NODE *temp;
if(front==NULL)
{
 printf("\nDEQUEUE EMPTY\n");
return;
 }
temp=front;
printf("\nDEQUEUE CONTENTS:\nFRONT->");
while(temp!=NULL)
{
 printf("%d->",temp->info);
 temp=temp->rptr;
 }
printf("->REAR");
}
