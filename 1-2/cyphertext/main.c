#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void fnEncrypt(char acstr[50]);
void fnDecrypt(char acstr[50]);


int main()
{
    char acmesg[50];
    printf("enter yer palin text in LOWER text\n\n");
    gets(acmesg);
    fnEncrypt(acmesg);
    printf("\n encrypted cypher text\n\n");
    puts(acmesg);
    fnDecrypt(acmesg);
    printf("\n\n decrpted plain text message\n\n");
    puts(acmesg);
    return 0;
}
void fnEncrypt(char acstr[50])
{
    int i;
    for(i=0;acstr[i]!='\o';i++)
    {
        if(!isspace(acstr[i]))
            acstr[i]=(acstr[i]-'a'+3+26)%26+'a';
    }
}
void fnDecrypt(char acstr[50])
{

    int i;
    for(i=0;acstr[i]!='\o';i++)
    {
        if(!isspace(acstr[i]))
            acstr[i]=(acstr[i]-'a'-3+26)%26+'a';
    }
}

