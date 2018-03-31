#include <iostream>
using namespace std;
class pwr
{
    double b;
    int e;
    double val;
public:
    pwr(double base, int exp);
    double getpwr()
    {
        return val;
    }
};
pwr :: pwr(double base ,int exp)
{
    b=base;
    e=exp;
    val=1;
    if(exp==0)
    return;
    for(;exp>0;exp--)
    {
        val=val*b;
    }
}
int main()
{
    pwr x(2.0,0),y(3.0,2),z(4.0,3);
    cout << x.getpwr() << " ";
    cout << y.getpwr() << " ";
    cout << z.getpwr() << " ";

}
