#include<iostream>
#include<string.h>
using namespace std;
class str
{

     char *p;
     int len;
     public:
       str()
       {   p=0;
           len=0;
       }
       void operator = (const char *x);
       void operator >=( str s);
       friend str operator + (str q,str t);
       friend ostream & operator << (ostream &sout,str q);
};
str s1,s2,s3;
void str :: operator = (const char *x)
{
    len=strlen(x);
    p=new char(len+1);
    strcpy(p,x);
}
str operator + (str q,str t)
{
     str temp;
     temp.len=q.len+t.len;
     temp.p=new char(temp.len+1);
     strcpy(temp.p,q.p);
     strcat(temp.p,t.p);
     return(temp);
}

void str::operator >= (str s)
{
    if(len<s.len)
        cout<<"string1 < string2\n";
    else
        cout<<"string1 is >= string2\n";
}
ostream & operator<<(ostream &sout,str q)
{
    sout<<q.p;
    return(sout);
}

int main()
{
    s1="VTU";
    s2="SIT";
    s3=s1+s2;
    cout<<"string1 = "<<s1<<"\n"<<"string2 = "<<s2<<"\n"<<"string3 = "<<s3<<"\n";
    s1>=s2;
    return 0;
}
