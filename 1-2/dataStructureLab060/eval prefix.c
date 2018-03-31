#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include <string.h>

#define Max 20
int st[Max], top=-1;

void push(int ch)
{
  if (top == Max-1)
   {
      printf("Stack is full\n");
   }
   else
   {
     top++;
     st[top]=ch;
   }
}

int  pop()
{
   int ch;
     if (top==-1)
      {
            printf("Stack is empty\n");
      }
      else
      {
               ch=st[top];
               top--;
      }
      return ch;
}

void dispstack()
{
  int k;
  printf("stack Content: ");
  for (k=top; k>=0; k--)
  {
    printf("%d, ", st[k]);
  }
  printf("\n");
}





int PreEval(char s[25])
{
  char temp[25];
  int i,val=0,ch1,ch2,j=0;
  i=0; top=-1;
  while (s[i]!='\0')
  {
    /*if operand is countered pr
    if ( (s[i]>=48 && s[i]<=57) )
    {
      j=0;
      temp[j]=s[i];
      j++;
      temp[j]='\0';
      push(atoi(temp));
    }
    else
    {
      ch2=pop();
      ch1=pop();
      switch(s[i])
      {
     case '+' :{
        val=ch2+ch1;
        break;
     }
     case '-' :{
        val=ch2-ch1;
        break;
     }
     case '*' :{
        val=ch2*ch1;
        break;
     }
     case '/' :{
        val=ch2/ch1;
        break;
     }
       }
     push(val);
    }
   i++;
  }
  val=pop();
  return val;
}




void main()
{
  char s[25]; //to store elements in array
  char *s1;
  int val;
  printf("enter a Prefix expression for evaluation\n");
  scanf("%s",s);
  strrev(s);
  printf("%s\n",s);
  //strcpy(s1,strrev(s));
  val= PreEval(s);
  printf("Value of Prefix Expression=%d\n", val);
  getch();
}
