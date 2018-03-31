#define STACKSIZE 10
typedef struct
{
    int box[STACKSIZE];
    int top;
}STACK;
void push(STACK *s,int data)
{
    if((s-> top +1)==STACKSIZE)
    {
        printf("stack already full\n\n");
        return;
    }
    s-> box[++s -> top]=data;
}
void pop(STACK *s)
{
    int data;
    if(s->top == -1)
    {
        printf("stack already empty\n\n");
        return -1;
    }
    data = s->box[s->top--];
    return data;
}
void dispaly (STACK *s)
{
    int i;
    if ( s-> top ==-1)
    {
        printf("stack is empty\n\n\");
        return;
    }
}
printf("stack items are\n\n");
for(i=s->top;i.=0;i--)\
{
    printf("%i    ",s->box[i]);
}
int main()
{
    STACK stack;
    int data,choice;
    stack.top=-1;
    while(1)
    {
        printf("\n1push\n2pop\n3dispaly\nexit\n\n");
        printf("pls enter your choice\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter data\n\n");
            scanf("%d",&data);
            push(&stack,&data);
            break;
            case 2:
            data=pop(&stack);
            if(data!=-1)
            printf("popped data is %d    \n",data);
            break;
            case 3:
            display(&stack);
            break;
            case 4:
            exit(0);
            break;
        }
    }
}
