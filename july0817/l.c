#include<stdio.h>
#include<strings.h>
int main()
{
    int i,j;
    char str[50][15];
    char temp[50];
    printf("enter strings\n\n");
    for(i=0;i<10;++i)
    {
        scanf("%s^[\n]",str[i]);
    }
    printf("entered strings are\n\n");
    for(i=0;i<10;++i)
    {
        puts(str[i]);
    }

    printf("sorting in lex order\n\n");

    for(i=0;i<10;++i)
    {
        for(j=i+1;j<10;++j)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("entered strings IN SORTED LEX ORDER are\n\n");
    for(i=0;i<10;++i)
    {
        puts(str[i]);
    }

}
