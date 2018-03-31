#include <iostream>
using namespace std;
int fib(int );
int main()
{
    int n,i,l;
    cout << "enter the value of n upto which fibonnaci series is to be calculated\n\n";
    cin >>n;
    cout <<"\n\nfibonacci series \n\n";
    cout <<"0  ";
    for(i=1;i<=n;i++)
    {
        l=fib(i);
        cout <<l<<"  ";
    }
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return (fib(n-1)+fib(n-2));
}
