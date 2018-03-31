#include <iostream>
using namespace std;
class base
{
public:
    virtual void vfunc()
    {
        cout << "this is base s vFunction\n\n";
    }
};
class derived1 : public base
{
public:
    void vfunc()
    {
        cout << "this is derived 1 v function\n\n";
    }
};
class derived2 : public derived1
{
    void vfunc()
    {
        cout << "this is derived 2 v function\n\n";
    }
};
int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b; // point to the base
    p->vfunc(); // access base v function
    p=&d1; // point to the derived1
    p->vfunc();
    p=&d2;
    p->vfunc();
    return 0;
}
