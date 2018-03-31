#include <iostream>
using namespace std;
int main()
{
    int t,rem,newn=0,a;
    cout << "enter the number to be reversed\n\n";
    cin >> a;
    t=a;
    while(t!=0)
    {
        rem=t%10;
        newn=(newn*10)+rem;
        t=t/10;
    }
    cout << "original number is  " << a;
    cout << "\n\nreverse of the number is  "<< newn << "\n\n\n";
    return 0;
}
