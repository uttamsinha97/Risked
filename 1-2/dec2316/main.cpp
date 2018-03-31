#include <iostream>
using namespace std;
template <class X>void swapargs(X &a ,X &b) //template used  for swapping PROBABLY
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=10,j=20;
    double x=10.1,y=23.3;
    char  a ='x' , b='z';
    cout << "original i,j : " << i << ' ' << j << '\n';
    cout << "original x,y : " << x << ' ' << y << '\n';
    cout << "original a,b : " << a << ' ' << b << '\n';
    swapargs(i,j);
    swapargs(x,y);
    swapargs(a,b);
    cout << " swapped i,j : " <<i << ' ' << j << '\n';
    cout << " swapped x,y : " <<x << ' ' << y << '\n';
    cout << " swapped a,b : " <<a << ' ' << b << '\n';
    return 0;
}
