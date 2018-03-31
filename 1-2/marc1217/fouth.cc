#include <iostream>
#include <string.h>
using namespace std;
class strng
{
private:
    char *p;
    int len;
public:
    strng(void);
    {
        p=0;
        len=0;
    }
    void operator =(const char *);
    void operator <=(strng t);
    friend strng operator +(strng q, strng t);
    friend ostream & operator << (ostream &sout ,strng q);
}s1,s2,s3;
void strng ::operator=(const char *)
{
    len=strlen(x);
    p=new char(len+1);
    strcpy(p,x);
}
strng operator +(strng q,strng t)
{
    strng temp;
    temp.len=q.len+t.len;
    temp.p
}
