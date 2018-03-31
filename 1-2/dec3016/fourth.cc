#include <iostream>
using namespace std;
int gcd (int m, int n);
int main()
{
    int m,n;
    cout << "enter the first number\n\n";
    cin>>m;
    cout <<"enter the second number\n\n";
    cin >>n;
    cout << "gcd of the two numbers are\n\n";
    cout << gcd(m,n) <<"  ";
    return 0;

}
int gcd (int m, int n)
{
    if(n==0)
        return m;
    else
        return gcd(n,m%n);
}
