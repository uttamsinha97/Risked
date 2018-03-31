#include <iostream>
using namespace std;
int main()
{
    int n,choice,i;
    cout <<"1 for first type of series\n2 for second type of series\n3 for third type of series\n\n";
    cin>>choice;
    cout <<"enter the number to terms desired\n";
    cin>>n;
    switch(choice)
    {
        case 1:
        for(i=1;i<=n;i++)
        {
            cout << (i*i)+i << "  ";
        }
        break;
        case 2:
        for(i=1;i<=n;i++)
        {
            cout << (2*i)+2 << "  ";
        }
        break;
        case 3:
        for(i=1;i<=n;i++)
        {
            cout << 3*(i*i)+3 << "  ";
        }
        break;
    }
    return 0;
}
