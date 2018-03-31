#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a="my name is uttam";
    FILE *fp1;
    fp1=fopen("uttam","w");
    fprintf(fp1,"%s",a);
    fclose(fp1);

}
