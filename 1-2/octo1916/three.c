#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_type(char c);
int stk[10];
int top=-1;
void push(int);
int pop();
int main()
{
    int i;
    char prefix[10];
    printf("enter the prefix expression\n\n");
    gets(prefix);
    len=strlen(prefix);
    for(i=len-1;i>=0;i++)
    {
        switch(get_type(prefix[i]))
    }

}
