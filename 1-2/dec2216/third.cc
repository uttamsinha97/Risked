#include <iostream>
using namespace std;
class base
{
    int i;
public:
    void seti(int num)
    {
        i=num;
    }
    int geti()
    {
        return i;
    }
};
class derived : public base
{
    int j;
public:
    void setj (int num)
    {
        j=num;
    }
    int getj()
    {
        return j;
    }
};
int main()
{
    base *bp;
    derived d;
    bp=&d;
    bp->seti(10);
    cout << bp->geti() << " ";
    return 0;
}
