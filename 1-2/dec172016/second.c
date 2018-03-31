#include <iostream>
using namespace std;
class smallobj
{
private:
    int somedata;
public:
    void setdata(int d)
    {
        somedata=d;
    }
    void displaydata()
    {
        cout << "data is  " << somedata << endl;
    }
};
int main()
{
    smallobj s1,s2;
    s1.setdata(20);
    s2.setdata(19);
    s1.displaydata();
    s2.displaydata();
    return 0;
}
