/*** PROGRAM 5A: EVALUATION OF VALID PREFIX EXPRESSION ***/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

#define MAXSIZ 30

struct STACK
{
   int top;
   int s[MAXSIZ];
}stack;

int main()
{
   char prefix[20];
   float eval(char *);
   printf("\nEnter a valid prefix expression:\n");
   gets(prefix);
   printf("\nResult of evaluation = %0.2f\n",eval(prefix));

}
void PUSH(int oprnd)
{
stack.s[++stack.top]=oprnd;
}

int POP()
{
 return stack.s[stack.top--];
}

float eval(char *prefix)
{
     float x1,x2;double P;
     int i=0,len;
     char ch;
     stack.top=-1;
len=strlen(prefix);
i=len-1;
  while(i>=0)
 {
        ch=prefix[i];
	if(isdigit(ch))
	    PUSH(ch-'0');
	else
	{
	   x1=POP();
	   x2=POP();
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
  i--;
 }
return(POP());
}
