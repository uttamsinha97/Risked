#include <stdio.h>
#include <stdlib.h>
#define maxx 10
typedef struct
{
    int data;
    int top;
    int box[maxx];

}stack;

 void push(stack *s,int data)
 {
     s->box[++s->top]=data;
 }
void pop(stack *s)
{
    int d;
    d = s->box[s->top--];
    printf("%d is deleted",d);
}
void display(stack *s)
{
     int i;
     for (i=s->top;i>=0;i--)
     {
         printf(" %d ",s->box[i]);
     }



}
int main()
{
    stack s;
    int ch,data;
    s.top=-1;
    while (1)
   {
        printf("\nenter\n1.push\n2.pop\n3display\n4.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nenter data to insert\n");
                scanf("%d",&data);
                push(&s,data);
                break;

        case 2:
                pop(&s);

                break;
        case 3:printf("\nstack items:\n");
                display(&s);
                break;
        case 4: exit(1);
    }
   }
    return 0;
}
