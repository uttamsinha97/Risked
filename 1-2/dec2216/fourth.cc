#include <iostream>
using namespace std;
int myfunction(int i);
double myfunction(double i);
int main()
{
    cout << myfunction(10) << "\n";
    cout << myfunction(10.25) << "\n";
    return 0;
}
double myfunction(double i)
{
    return i;
}
int myfunction(int i)
{
    return i;
}
