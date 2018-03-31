#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
 char s1[20];
 //char *s2;
 printf("\nEnter any string: ");
 gets(s1);
 printf("%s   \n",strrev(s1));

 return 0;
}

