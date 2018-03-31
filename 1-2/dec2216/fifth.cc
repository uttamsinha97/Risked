#include<iostream>
using namespace std;
int myfun(int i);
int myfun(int i,int j);
int main()
{
    cout << myfun(10) << "\n";
    cout << myfun(5,4) << "\n";
    return 0;
}
int myfun(int i)
{
    return i;
}
int myfun(int i,int j)
{
    return (i*j);
}
