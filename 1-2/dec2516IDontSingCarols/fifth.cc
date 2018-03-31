#include <iostream>
using namespace std;
class cl
{
    int i;
public:
    cl()
    {
        i=0;
    }
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
    cl ob[3]={1,2,3};
    cl *p;
    int i;
    p=ob;
    for(i=0;i<3;i++)
    {
        cout << p->geti() << "\n";
        p++;
    }
    return 0;
}
