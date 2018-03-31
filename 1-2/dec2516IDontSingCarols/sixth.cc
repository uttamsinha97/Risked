#include <iostream>
using namespace std;
class cl
{
public: //public class
    int i;
    cl(int j)
    {
        i=j;
    }

};
int main() // main function for out
{
    cl ob(123456789);
    int *p;
    p=&ob.i;
    cout << *p ;
    return 0;
}
