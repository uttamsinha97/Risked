#include <iostream>
using namespace std;
union swapByte
{
    void swap();
    void setByte(unsigned short);
    void showWord();

    unsigned short u;
    unsigned char c[2];
};
void swapByte:: swap()
{
   unsigned char t;
   t=c[0];
   c[0]=c[1];
   c[1]=t;
}
void swapByte :: showWord()
{
    cout << u;
}
void swapByte :: setByte( unsigned short i)
{
    u=i;
}
int main()
{
    swapByte b;
    b.setByte(12345);
    b.swap();
    b.showWord();
    return 0;
}
