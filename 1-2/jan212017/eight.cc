#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<"enter three INTEGER numbers\n\n";
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"entered numbers are\n"<<a<<" "<<b<<" "<<" "<<c<<"\n\n";
    if(a>b && a>c)
    cout<<"\nlargest number is"<<a<<"\n";
    if(b>a && b>c)
    cout<<"\nlargest number is"<<b<<"\n";
    if(c>a && c>b)
    cout<<"\nlargest number is  "<<c<<"\n";
    return 0;
}
