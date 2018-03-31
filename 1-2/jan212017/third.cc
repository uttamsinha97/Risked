#include <iostream>
using namespace std;
int main()
{
    int d,i=0,a[10],j;
    cout<<"enter a number\nits binary value will be displayed\n\n";
    cin >>d;
    while(d>0)
    {
        a[i]=d%2;
        d=d/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    cout <<a[j];
    return 0;
}
