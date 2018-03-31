#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char acmsg[50];
void fnencrypt(char amsg[50]);
void fndcrypt(char amsg[50]);
int i;
int main()
{
    char msg[50];


    printf("enter the plain text\n\n");
    gets(msg);
    fnencrypt(msg);
    printf("encrypted msg\n\n");
    puts(msg);
    fndecrypt(msg);
    puts(msg);
    printf("decrypted msg");
    return 0;
}
 void fnencrypt(char amsg[50])
 {
     for(i=0;amsg[i]!='\0';i++)
     {
         (!isspace(amsg[i]))
         amsg[i]=(amsg[i]-'a'+3+26)%26+'a';
     }
 }
  void fndcrypt(char amsg[50])
 {
     for(i=0;acmsg[i]!='\0';i++)
     {
         (!isspace(amsg[i]))
         amsg[i]=(amsg[i]-'a'-3+26)%26+'a';
     }
 }
