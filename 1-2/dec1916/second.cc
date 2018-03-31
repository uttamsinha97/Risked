#include <iostream>
#include <vector>
#include <numeric>
using namespace std; //
int main()
{
    vector<int> v(10),r(10);
    int i;
    for(i=0;i<10;i++) v[i]=i*2;
    cout << "original sequence   ";
    for(i=0;i<10;i++)
        cout << v[i] << " ";
    cout << endl;
    adjacent_difference(v.begin(),v.end(),r.begin());
    cout << " resulting sequence ";
    for(i=0; i<10; i++)
        cout << r[i] << " ";
    return 0;
}
