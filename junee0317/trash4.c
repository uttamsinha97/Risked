#include <stdio.h>
#include <string.h>
#include <strings.h>
int main()
{

    int i;
    char *str ="uttam";
    char rev[5] ;
   // printf("\nenter string\n\n");
    // gets(str);
    int l=strlen(str);
    printf("the entered string is %s\n\n",str);
    printf("length of entered string is %i\n\n",l);
    for(i=1;i<=l;i++)
    {
        rev[i]=str[l-i];

    }
    puts(rev);
    printf("\n\nreverse is %s \n\n",rev);
    return 0;
}
