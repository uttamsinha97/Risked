#include <iostream>
#include <cstring>
using namespace std;
struct mystr
{
    void buildstr(char *s);
    void showstr();
private:
    char str[80];
};
void mystr:: buildstr(char *s)
{
    if(!*s)*str='\0';
    else strcat(str,s);
}
void mystr :: showstr()
{
    cout << str << '\n';
}
int main()
{

mystr s;
s.buildstr("Hello");
s.buildstr("there\n\n");
s.showstr();
return 0;
}
