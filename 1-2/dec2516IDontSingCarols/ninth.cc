#include <iostream>
using namespace std;
class convert
{
protected:
    double val1;
    double val2;
public:
    convert(double i)
    {
        val1=i;
    }
    double getconv()
    {
        return val2;
    }
    double getinit()
    {
        return val1;
    }
    virtual void compute()=0;
};
class ltog: public convert
