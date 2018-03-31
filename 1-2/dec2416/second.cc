#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>

void stradd(char *s1, char *s2);
void stradd(char *s1, int i);
int main()
{
    char str[80];
    strcpy(str, " hello ");
    stradd(str," there ");
    cout << str << "\n\n";
    stradd(str,100);
    cout << str << "\n\n";
    return 0;
}
void stradd(char *s1, char *s2)
{
        strcat(s1,s2);
}
void stradd(char *s1,int i)
{
    char temp[80];
    sprintf(temp, "%d",i);
    strcat(s1,temp);
}
