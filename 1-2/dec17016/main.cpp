#include <iostream>
using namespace std;
class part
{
private:
    int modelnumber;
    int partnumber;
    float price;
public:
    void setpart(int mn,int pn,float c)
    {
        modelnumber=mn;
        partnumber=pn;
        price=c;
    }
    void showpart()
    {
        cout << "model " << modelnumber ;
        cout  << "part number" << partnumber;
        cout << "price" << price << endl;
    }
};
int main()
{
    part part1;
    part1.setpart(6244, 373, 217.55F);
    part1.showpart();
    return 0;
}
