#include <iostream>
using namespace std; // standard basic function
class cl
{
    int i;
public:
    cl(int j)
    {
        i=j;
    }
    int geti()
    {
        return i;
    }
};
int main()
{
    cl ob(88),*p;
    p=&ob;
    cout << p->geti() ;
    return 0;
}
