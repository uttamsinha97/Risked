#include <iostream>
using namespace std;
class cl
{
    int i;
public:
    cl (int j)
    {
        i=j;
    } //constructor ends
    int geti()
    {
        return i;
    }
};
int main()
{
    cl ob[3]={1,2,3};
    int i; // probably more like a c++ style
    for(i=0;i<3;i++)
    cout << ob[i].geti()  << "\n\n";
    return 0;

}
