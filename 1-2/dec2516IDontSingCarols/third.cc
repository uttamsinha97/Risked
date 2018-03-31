#include <iostream>
using namespace std;
class cl
{
    int h;
    int i;
public:
    cl(int j,int k)
    {
        h=j;
        i=k;
    }
    int geth()
    {
        return h;
    }
    int geti()
    {
        return i;
    }
};
int main()
{
    cl ob[3]={cl(1,2),cl(3,4),cl(4,5)};
    int i;
    for(i=0;i<3;i++){
        cout << ob[i].geth();
        cout <<"\n";
        cout<< ob[i].geti[i] <<"\n";}
    return 0;
}
