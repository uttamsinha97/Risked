#include <iostream>
using namespace std;
class myclass
{
    int a, b;
public :
    friend int sum(myclass x);
    void setab(int i , int j);
};
void myclass :: setab(int i,int j)
{
    a=i;
    b=j;
}
int sum(myclass x)
{
    return x.a+x.b;
}
int main()
{
    myclass n;
    n.setab(3,4);
    cout << sum(n);
    return 0;
}
