#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    void setdist(int f, float i)
    {
        feet=f;
        inches=i;}
    void getdist()
    {
        cout << "\n enter feet  "; cin >> feet;
        cout << "\n enter inches "; cin >> inches;}
    void showdist()
    {
        cout << feet << " " << inches << "  " ;
    }};
int main()
{   Distance d1;
    Distance d2;
    d1.setdist(5,11.5);
    d2.getdist();
    cout << "\n distance 1      " ; d1.showdist();
    cout << "\n distance 2      " ; d2.showdist();
    cout << endl;
    return 0;
}
