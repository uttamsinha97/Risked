#include <iostream>
using namespace std;
class Student
{
    private:
    char name[25];
    char USN[25];
    int m1,m2,m3;
    public:
        void getdata();
        void showdata();
};
void Student::getdata()
{
    cout<<"enter name of student"<<endl;
    cin>>name;
    cout<<"enter the usn"<<endl;
    cin>>USN;
    cout<<"enter the marks in three subjects"<<endl;
    cin>>m1>>m2>>m3;
}
void Student::showdata()
{
    float avg;
    cout<<"name"<<" "<<name<<endl;
    cout<<"USN "<<" "<<USN<<endl;
    cout<<"marks in first subject"<<"  "<<m1<<endl;
    cout<<"marks in second subject"<<"  "<<m2<<endl;
    cout<<"marks in third subject"<<"  "<<m3<<endl;
    if(m1<m2 && m1<m3)
        avg=(m2+m3)/2;
    if(m2<m1 && m2<m3)
        avg=(m1+m3)/2;
    if(m3<m2 && m3<m1)
        avg=(m1+m2)/2;
    cout<<"average of best two"<<"  "<<avg<<endl;
}
int main()
{   Student s[3];
    cout<<"enter student details"<<endl;
    for(int i=1;i<=3;i++)
    {
        s[i].getdata();
    }
    cout<<"student details"<<endl;
    for(int j=1;j<=3;j++)
    {
        s[j].showdata();
    }
    return 0;

}
