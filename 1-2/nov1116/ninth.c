
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 50
int size;

// Defining the stack structure
struct stack {
   int arr[MAX];
   int top;
};

// Initializing the stack(i.e., top=-1)
void init_stk(struct stack *st) {
   st->top = -1;
}

// Entering the elements into stack
void push(struct stack *st, int num) {
   if (st->top == size - 1) {
      printf("\nStack overflow(i.e., stack full).");
      return;
   }
   st->top++;
   st->arr[st->top] = num;
}

//Deleting an element from the stack.
int pop(struct stack *st) {
   int num;
   if (st->top == -1) {
      printf("\nStack underflow(i.e., stack empty).");
      return NULL;
   }
   num = st->arr[st->top];
   st->top--;
   return num;
}

void display(struct stack *st) {
   int i;
   for (i = st->top; i >= 0; i--)
      printf("\n%d", st->arr[i]);
}

int main() {
   int element, opt, val;
   struct stack ptr;
   init_stk(&ptr);
   printf("\nEnter Stack Size :");
   scanf("%d", &size);
   while (1) {
      printf("\n\ntSTACK PRIMITIVE OPERATIONS");
      printf("\n1.PUSH");
      printf("\n2.POP");
      printf("\n3.DISPLAY");
      printf("\n4.QUIT");
      printf("\n");
      printf("\nEnter your option : ");
      scanf("%d", &opt);
      switch (opt) {
      case 1:
         printf("\nEnter the element into stack:");
         scanf("%d", &val);
         push(&ptr, val);
         break;
      case 2:
         element = pop(&ptr);
         printf("\nThe element popped from stack is : %d", element);
         break;
      case 3:
         printf("\nThe current stack elements are:");
         display(&ptr);
         break;
      case 4:
         exit(0);
      default:
         printf("\nEnter correct option!Try again.");
      }
   }
   return (0);
}
Output :


<a href="http://img.c4learn.com/2012/02/stack-output.jpg"><img class="aligncenter size-full wp-image-5434" src="http://img.c4learn.com/2012/02/stack-output.jpg" alt="" width="550" height="430" /></a>
1
<a href="http://img.c4learn.com/2012/02/stack-output.jpg"><img class="aligncenter size-full wp-image-5434" src="http://img.c4learn.com/2012/02/stack-output.jpg" alt="" width="550" height="430" /></a>
Explanation of Program :

We are declaring the stack with MAX size specified by the preprocessor.


struct stack
{
    int arr[MAX];
    int top;
};
1
2
3
4
5
struct stack
{
    int arr[MAX];
    int top;
};
As soon as after defining the stack we are initializing the top location of stack to -1. We are passing the structure to the function using pointer thus we can see the “struct stack*” as data type in the function call.


void init_stk(struct stack *st)
{
    st-&gt;top = -1;
}
1
2
3
4
void init_stk(struct stack *st)
{
    st-&gt;top = -1;
}
Whenever we are accessing the member of the structure using the structure pointer then we are using arrow operator. If we have to access the top element of stack then we are writing


st-&gt;top
1
st-&gt;top
Similarly if we have to access oth element of the stack array then we can write –


st-&gt;arr[0]
1
st-&gt;arr[0]
Since we have to access the topmost element we can write it as –


st-&gt;arr[st-&gt;top]
1
st-&gt;arr[st-&gt;top]
Procedure of Pushing :

Check whether the size reached upto the maximum or not,
Increment the top
Insert the element.
Similar steps are depicted in the code –


void push (struct stack *st,int num)
{
    if(st->top == size-1)
        {
        printf("nStack overflow(i.e., stack full).");
        return;
        }
    st->top++;
    st->arr[st->top] = num;
}
1
2
3
4
5
6
7
8
9
10
void push (struct stack *st,int num)
{
    if(st->top == size-1)
        {
        printf("nStack overflow(i.e., stack full).");
        return;
        }
    st->top++;
    st->arr[st->top] = num;
}
Procedure of Poping element :

Check whether the size reached upto the minimum or not(underflow)
Remove Element
Decrement the top

int pop(struct stack *st)
{
    int num;
    if(st->top == -1)
        {
        printf("nStack underflow(i.e., stack empty).");
        return NULL;
        }
    num = st->arr[st->top];
    st->top--;
    return num;
}
1
2
3
4
5
6
7
8
9
10
11
12
int pop(struct stack *st)
{
    int num;
    if(st->top == -1)
        {
        printf("nStack underflow(i.e., stack empty).");
        return NULL;
        }
    num = st->arr[st->top];
    st->top--;
    return num;
}






