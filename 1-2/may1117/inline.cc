#include<iostream>
using namespace std;
inline void large(int a,int b,int c)
{
     cout<<"Values"<<endl<<"A="<<a<<endl<<"B="<<b<<endl<<"C="<<c<<endl;
     if(a>b&&a>c)
         cout<<"a is greatest";
     else if(b>c&&b>a)
         cout<<"b is greatest";
     else
         cout<<"c is greatest";
}
int main()
{
     int a,b,c;
     cout<<"Enter value for a,b and c"<<endl;
     cin>>a;
     cin>>b;
     cin>>c;
     large(a,b,c);
}
