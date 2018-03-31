#include <iostream>
using namespace std;
class u
{
private :
    int a;
public:
    void getvalue()
    {
        cout <<"enter the number\n\n";
        cin >> a;
    }
    void disval()
    {
        cout <<"the inputted number is\n\n";
        cout << a << "\n\n";
    }
};
int main()
{
    u a;
    a.getvalue();
    a.disval();
    return 0;

}
