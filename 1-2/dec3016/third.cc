#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout << "enter the first number\n\n";
    cin>> a;
    cout << "enter the second number\n\n";
    cin >> b;
    cout << "the numbers before swapping are \n\n";
    cout << a << "   " << b << "\n\n";
    temp=a;
    a=b;
    b=temp;
    cout << "the numbers after swapping them are\n\n";
    cout << a << "   " << b << "\n\n";
    return 0;

}
