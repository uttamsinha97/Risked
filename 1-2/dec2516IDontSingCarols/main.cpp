#include <iostream>
using namespace std;
class cl
{
    int i;
public:
    void seti(int j)
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
    cl ob[3];
    int i;
    for(i=1;i<3;i++)
    {
        ob[i].seti(i);
    }
    for(i=1;i<3;i++)
    {
        cout << ob[i].geti()<< "\n";
    }
    return  0;
}
