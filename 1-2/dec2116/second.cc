#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void stradd(char *s1, char *s2);
void stradd(char *s1,int i);

int main()
{
    char str[80];
    strcpy(str,"hello");
    stradd(str,"there");
    cout << str << "\n";
    return 1;
}

void stradd(char *s1,char *s2)
{
    strcat(s1,s2);
}

void stradd(char *s1,int i)
{
    char temp[80];
    sprintf(temp,"%i",i);
    strcat(s1,temp);
}
