#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char temp[10];
    char str[10][10];
    printf("enter stringsS\n\n");
    for(i=0;i<8;++i)
    {
       // scanf("%s^[\n]",str[i]);
       gets(str[i]);
    }
     printf("\n\n~~~~~~~~`strings in~~~~~~~~~~~~\n\n");
        for(i=0;i<8;++i)
    {
        printf("%s\n",str[i]);
        //puts(str[i]);
        printf("\n");
    }

    for(i=0;i<8;++i)
    {
        for(j=i;j<8;++j)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\n\n~~~~~~~~`strings in LEX ORDER~~~~~~~~~~~~~~~\n\n");
            for(i=0;i<8;++i)
    {
        puts(str[i]);
        printf("\n");
    }
    return 0;


}
