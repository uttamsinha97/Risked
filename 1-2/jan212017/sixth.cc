#include <iostream>
using namespace std;
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    cout<<"Enter an integer"<<endl;
    cin>>n;

    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        cout<<"palindrome  "<<originalInteger<<endl;
    else
        cout<<"not a palindrome  "<<originalInteger<<endl;

    return 0;
}
