/*** ADDITION OF TWO LONG POSITIVE INTEGERS USING CIRCULAR
		 LINKED LIST WITH HEADER NODE ***/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
struct node
{
   int info;
   struct node *next;
};
typedef struct node NODE;
void main()
{
     NODE *insert(NODE*,int);
     NODE *add(NODE*,NODE*,NODE*);
     void display(NODE *);
     void display1(NODE*);
     NODE *head1,*head2,*head3;
     char ch;

     head1=(NODE*)malloc(sizeof(NODE));
     head2=(NODE*)malloc(sizeof(NODE));
     head3=(NODE*)malloc(sizeof(NODE));
     head1->next=head1;
     head2->next=head2;
     head3->next=head3;

    printf("Enter the first number(press enter to terminate)\n");
     while((ch=getchar())!='\n')
     {
	if(isdigit(ch))
	    head1=insert(head1,ch-'0');
	else
	{
	    printf("Invalid digit");
	    exit(1);
	 }
     }

    printf("Enter the second number(press enter to terminate)\n");
     while((ch=getchar())!='\n')
     {
	if(isdigit(ch))
	    head2=insert(head2,ch-'0');
	else
	{
	    printf("\nInvalid digit\n");
	    exit(1);
	 }
      }

      printf("\nFIRST NUMBER:  ");
      display1(head1);

      printf("\nSECOND NUMBER: ");
      display1(head2);

      head3=add(head3,head1,head2);
      printf("\nRESULTANT SUM: ");
      display(head3);

 }

    NODE *insert(NODE *head,int digit)
   {
	 NODE *newnode,*first;
	 newnode=(NODE*)malloc(sizeof(NODE));
	 newnode->info=digit;

	 newnode->next=head->next;
	 head->next=newnode;
	 return(head);
     }

      NODE * add(NODE *head3,NODE *head1,NODE *head2)
      {
	    int total,carry=0,rem;
	    NODE *num1,*num2;
	    num1=head1->next;
	    num2=head2->next;

	    while(num1!=head1 && num2!=head2)
	    {
		total=num1->info + num2->info +carry;
		rem=total%10;
		head3=insert(head3,rem);
		num1=num1->next;
		num2=num2->next;
		carry=total/10;
	     }

	     while(num1!=head1)
	    {
		total=num1->info + carry;
		rem=total%10;
		head3=insert(head3,rem);
		num1=num1->next;
		carry=total/10;
	     }

	     while(num2!=head2)
	    {
		total=num2->info +carry;
		rem=total%10;
		head3=insert(head3,rem);
		num2=num2->next;
		carry=total/10;
	     }
	      if(carry==1)
		 head3=insert(head3,carry);
	      return(head3);
       }

       void display(NODE *head)
       {
	   NODE *temp;
	   if(head==head->next)
	   {
	      printf("\nEmpty list\n");
	      return;
	   }
	   temp=head->next;
	   while(temp!=head)
	   {
	       printf("%d",temp->info);
	       temp=temp->next;
	   }
	}


	void display1(NODE *head)
       {
	   NODE *temp1,*temp2;
	   if(head==head->next)
	   {
	      printf("\nEmpty list\n");
	      return;
	   }
	   temp2=head;
	   while(temp2!=head->next)
	   {
	      temp1=head->next;
	      while(temp1->next!=temp2)
		 temp1=temp1->next;
	       printf("%d",temp1->info);
	       temp2=temp1;
	   }

	}

