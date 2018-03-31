#include<iostream>
using namespace std;
inline void large(int a,int b,int c)
{
    cout<<"Values"<<endl<<"A="<<a<<endl<<"B="<<b<<endl<<"C="<<c<<endl;
    if(a>b)
        {
            if(a>c)
            {
                cout<<"a is greatest";
            }
            else
            {
                cout<<"c is greatest";
            }
        }
    else
        {
            if(b>c)
                {
                    cout<<"b is greatest";
                }
            else
                {
                    cout<<"C is greatest";
                }
        }
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
