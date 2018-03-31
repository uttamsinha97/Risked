#include<iostream>
#include<string.h>
using namespace std;
class strng
{
    char *p;
    int len;
    public:
        strng(void)
        {
            p=0;
            len=0;
        }
        void operator = (const char *x);
        void operator >= (strng t);
        friend strng operator + (strng q,strng t);
        friend ostream & operator << (ostream &sout,strng q);
}s1,s2,s3;
void strng :: operator = (const char *x)
{
    len=strlen(x);
    p=new char(len+1);
    strcpy(p,x);
}
strng operator + (strng q,strng t)
{
    strng temp;
    temp.len=q.len+t.len;
    temp.p=new char(temp.len+1);
    strcpy(temp.p,q.p);
    strcat(temp.p,t.p);
    return(temp);
}
void strng::operator >= (strng t)
{
        if(len<=t.len)
            cout<<"string s3 is less than or equal to s2\n";
       // else if(len==t.len)
         //   cout<<"string s2 is equal to s3\n";
        else
            cout<<"string s3 is greater than string s2\n";
}
ostream & operator<<(ostream &sout,strng q)
{
        sout<<q.p;
        return(sout);
}
int main()
{
        s1="vtu";
        s2="sit";
        s3=s1+s2;
        cout<<"s1="<<s1<<"\n"<<"s2="<<s2<<"\n"<<"s3="<<s3<<"\n";
        s3>=s2;
        return(0);
}
