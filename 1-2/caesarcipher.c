#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void fnencrypt(char []);
void fndecrypt(char []);
int main()
{
    char acmesg[50];
    printf("\nEnter your plain text in lower case\n");
    gets(acmesg);

    fnencrypt(acmesg);
    printf("Encrypted cypher text\n");
    puts(acmesg);

    fndecrypt(acmesg);
    printf("decrypted plain text\n");
    puts(acmesg);
    return 0;
}
void fnencrypt(char acstr[50])
{
    int i;
    for(i=0;acstr[i]!='\0';i++)
    {
        if(!isspace(acstr[i]))
        acstr[i]=(acstr[i]-'a'+3+26)%26+'a';

    }
}
void fndecrypt(char acstr[50])
{
    int i;
    for(i=0;acstr[i]!='\0';i++)
    {
        if(!isspace(acstr[i]))
        acstr[i]=(acstr[i]-'a'-3+26)%26+'a';
    }
}
