#include <iostream>
using namespace std;

int main()
{
    char str[800];
    //string str;
    cout << "enter name in full"<<endl;
    //getline(cin,str);
    cin.get(str,799);
    cout <<str;
    return 0;
}
