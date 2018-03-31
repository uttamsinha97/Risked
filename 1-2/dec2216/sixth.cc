#include <iostream>
#include <cstdio>
using namespace std;
class date
{
    int day,month,year;
public:
    date(char *d);
    date(int m, int d, int y);
    void showdate();
};
date :: date(char *d)
{
    sscanf(d, "%d%*c%d%*c%d" ,&month , &day ,&year);
}
date :: date(int m , int d , int y)
{
    day=d;
    month=m;
    year=y;
}
void date:: showdate()
{
    cout << month << "/" << day;
    cout << "/" << year << "\n";
}
int main()
{
    date uttam(9,2,1996);
    date satyam(25,9,1999);
    uttam.showdate();
    satyam.showdate();
    return 0;
}
