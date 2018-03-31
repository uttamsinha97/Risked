#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char str1[100],str2[100],str3[100];
    printf("enter string\a");
    gets(str1);
    printf("enter second string\n\n");
    gets(str2);
    printf("enter the third string\n\n\n");
    gets(str3);
    for(;;)
    {
        printf("%s\t\t%s\t\t%s\n\n",str1,str2,str3);
    //puts(str1);
    //puts(str2);
    //puts(str3);

    }

    return 0;

}
