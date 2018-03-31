#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
struct node
{
    char info;
    struct node*lchild,*rchild;
};
typedef struct node TREE;
float eval(TREE*);
TREE *createTREE(char postfix[]);
float eval(TREE *root);

int main()
{
    char postfix[30];
    float res;
    TREE *root=NULL;
    printf("enter a valid postfix expression: \n ");
    scanf("%s",postfix);
    root=createTREE(postfix);
    res=eval(root);
    printf("result =%f",res);
    return 0;
}

TREE *createTREE(char postfix[])
{
    TREE *newnode,*stack[20],*temp;
    int i=0,top=-1;
    char ch;
    while((ch=postfix[i++])!='\0')
    {
        newnode=(TREE*)malloc(sizeof(TREE));
        newnode->info=ch;
        newnode->lchild=newnode->rchild=NULL;
        if(isalnum(ch))
        stack[++top]=newnode;
        else
        newnode->rchild=stack[top--];
        newnode->lchild=stack[top--];
        stack[++top]=newnode;
    }

   temp=stack[top--];
   if(top==-1)
    return(temp);
    else
  {
      printf("\n invalid expression");
      exit(1);
  }
}
  float eval(TREE *root) // recusrive function
  {
      float num;
      switch(root->info)
      {
          case '+':return (eval(root->lchild)+eval(root->rchild));
          case '-':return (eval(root->lchild)-eval(root->rchild));
          case '*':return (eval(root->lchild)*eval(root->rchild));
          case '/':return (eval(root->lchild)/eval(root->rchild));
          case '^':return (pow(eval(root->lchild),eval(root->rchild)));
          default:if(isalpha(root->info))
          {
              printf("\n %c=",root->info);
              scanf("%f",&num);
              return(num);

          }
          else
          return(root->info-'0');
      }
  }
