#include <iostream>
using namespace std;
class x
{
    int a;
public:
    x(int j)
    {
        a=j;
    }
    int geta()
    {
        return a;
    }
};
int main()
{
    x ob=10;
    cout << ob.geta() <<"\n";
    return 0;
}
