/*** PROGRAM 5A: EVALUATION OF VALID POSTFIX EXPRESSION ***/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAXSIZ 30

struct STACK
{
   int top;
   int s[MAXSIZ];
}stack;

int main()
{
   char postfix[20];
   float eval(char *);


   printf("\nEnter a valid postfix expression:\n");
   gets(postfix);

   printf("\nResult of evaluation = %0.2f\n",eval(postfix));

}
void PUSH(int oprnd)
{
stack.s[++stack.top]=oprnd;
}

int POP()
{
 return stack.s[stack.top--];
}

float eval(char *postfix)
{
     float x1,x2;double P;
     int i=0;
     char ch;
     stack.top=-1;

     while((ch=postfix[i++])!='\0')
     {
	if(isdigit(ch))
	  PUSH(ch-'0');
	else
	{
	   x2=POP();
	   x1=POP();
	   switch(ch)
	   {
	      case '+': PUSH(x1+x2);
			         break;
	      case '-': PUSH(x1-x2);
			         break;
	      case '*': PUSH(x1*x2);
			         break;
	      case '/': PUSH(x1/x2);
			         break;
          case '^':
          case '$':PUSH(pow(x1,x2));
                     break;
	      default: printf("\nInvalid operator !!!\n");
		         exit(1);
	    }
	 }
      }
return(POP());
}
