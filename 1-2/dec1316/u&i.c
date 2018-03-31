#include <stdio.h>
#include <stdlib.h>
struct  node
{
    int x;
    struct node *next;
};
typedef struct node NODE;
NODE *insert(NODE *start,int data)
{
    NODE *newnode,*temp;
    newnode=(NODE *)malloc(sizeof(newnode));
    if(newnode==NULL)
    {
        printf("\ALLOCATION FAILURE\n");
        return start;
    }
     newnode->x=data;
     newnode->next=NULL;
     if(start==NULL)
        start=newnode;
         else
        {
            temp=start;
            while(temp->next!=NULL)
               temp=temp->next;
         temp->next=newnode;
        }
        return start;
}
void display(NODE *start)
 {
     NODE *temp;

     if(start==NULL)
         printf("\nEmpty list\n");
         else
         {
        temp=start;
        printf("LIST CONTAINS:\n");
         while(temp!=NULL)
         {
             printf("%d   ",temp->x);
             temp=temp->next;
         }
         printf("\n");
 }
 }
 int search(NODE *list,int ele)
 {
     while(list!=NULL)
     {
         if(list->x==ele)
            return 1;
          list=list->next;
     }
     return 0;
}
 NODE *UNION(NODE *list1,NODE *list2)
 {
     NODE *list=NULL;int ele;
         while(list1!=NULL)
         {
             ele=list1->x;
             if(!search(list,ele))
                list=insert(list,ele);
               list1=list1->next;
         }
          while(list2!=NULL)
         {
             ele=list2->x;
             if(!search(list,ele))
                list=insert(list,ele);
               list2=list2->next;
         }
         return list;
 }
 NODE *intersection(NODE *list1,NODE *list2)
 {
     NODE *list=NULL;int ele;
         while(list1!=NULL)
         {
             ele=list1->x;
             if(search(list2,ele))
             {
                 if(!search(list,ele))
                 list=insert(list,ele);
             }
               list1=list1->next;
         }
         return list;

 }
 int main()
 {
     NODE *list1,*list2,*list;list1=list2=list=NULL;int data,ch,n1,n2;
               printf("\nEnter the number of elements of list 1\n");
                  scanf("%d",&n1);
                  if(n1<0)
                  {
                      printf("\nINVALID ENTRY\n");
                      return ;
                  }
                     printf("\nEnter the data for list1\n");
                     while(n1)
                     {
                        scanf("%d",&data);
                        list1=insert(list1,data);
                        n1--;
                     }
                     printf("\nList 1 conatins:\n");
                     display(list1);
             printf("\nEnter the number of elements of list 2\n");
                     scanf("%d",&n2);
                     if(n2<0)
                  {
                      printf("\nINVALID ENTRY\n");
                      return ;
                  }
                     printf("\nEnter the data for list2\n");
                     while(n2)
                     {
                        scanf("%d",&data);
                        list2=insert(list2,data);
                        n2--;
                     }
                     printf("\nList 2 conatins:\n");
                     display(list2);
             list=UNION(list1,list2);
                    printf("\nLIST AFTER UNION OPERATION OF LIST 1 AND LIST 2 IS:\n");
                      display(list);
             list=intersection(list1,list2);
                  printf("\nLIST AFTER INTERSECTION OPERATION OF LIST 1 AND LIST 2 IS:\n");
                    display(list);

          return 0;

 }
