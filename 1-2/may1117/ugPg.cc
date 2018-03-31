#include<stdlib.h>
#include<iostream>
using namespace std;
class student
{
    char name[25];
    char usn[10];
    protected :
        int age;
    public :
        void get_data(void)
        {
            cout<<"enter the NAME, USN and AGE :";
            cin>>name>>usn;
            cin>>age;
        }
        void display()
        {
            cout<<name<<"\t\t"<<usn<<"\t\t"<<age<<"\t\t";
        }
};

class ug : public student
{
    float fees,stipend;
    protected :
        int sem;
    public :
        void get_data(void)
        {
            student :: get_data();
            cout<<"enter the semister,fee and stipend :";
            cin>>sem;
            cin>>fees>>stipend;
        }
        void show_data(void)
        {
            student :: display();
            cout<<sem<<"\t\t"<<fees<<"\t\t"<<stipend<<endl;
        }

    friend void average_age( ug a[] ,int n);
};

void average_age(ug a[],int n)
{
    int aver=0;
    for(int i=0;i<8;i++)
        {
            int no=0;
            aver=0;
            for(int j=0;j<n;j++)
                {
                    if(a[j].sem == i)
                    {
                        no++;
                        aver+=a[j].age;
                    }
                }
            if(aver !=0)
                {
                    aver=aver/no;
                    cout<<i<<" UG Sem students average = "<<aver<<endl;
                }
        }
}

class pg : public student
{
    float fees,stipend;
    protected :
        int sem;
        public :
            void get_data(void)
            {
                student :: get_data();
                cout<<"enter the semister, fee and stipend :";
                cin>>sem;
                cin>>fees>>stipend;
            }
            void show_data(void)
            {
                student :: display();
                cout<<sem<<"\t\t"<<fees<<"\t\t"<<stipend<<endl;
            }

    friend void average_age( pg a[] ,int n);
};

void average_age(pg a[],int n)
{
    int aver=0;
    for(int i=0;i<8;i++)
        {
            int no=0;
            aver=0;
                for(int j=0;j<n;j++)
                    {
                        if(a[j].sem == i)
                        {
                            no++;
                            aver+=a[j].age;
                        }
                    }
                if(aver !=0)
                    {
                        aver=aver/no;
                        cout<<i<<" Sem PG students average = "<<aver<<endl;
                    }
            }
}

int main()
{
    int n1,n2;
    cout<<"enter the no. of UG students :";
    cin>> n1;
    cout<<"enter  the no of PG students :";
    cin>>n2;
    ug a[n1];
    pg b[n2];
    cout<<"\nenter the details of "<<n1<<" UG students\n"<<endl;
    for(int i=0 ;i<n1;i++)
        {
            a[i].get_data();
        }
    cout<<"\nenter the details of "<<n2<<" PG students\n"<<endl;
    for(int i=0 ;i<n2;i++)
        {
            b[i].get_data();
            cout<<"\n";
        }
    cout<<"\n\nUG students DETAILS "<<endl;
    cout<<"\nNAME\t\t USN\t\tAGE\t\tSEM\t\tFEES\t\tSTIPEND"<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl ;
    for(int i=0;i<n1;i++)
        {
            a[i].show_data();
            cout<<endl;
        }
    average_age(a,n1);
    cout<<"\n\nPG students DETAILS "<<endl;
    cout<<"\nNAME\t\t USN\t\tAGE\t\tSEM\t\tFEES\t\tSTIPEND"<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<n2;i++)
        {
            b[i].show_data();
            cout<<endl;
        }

    average_age(b,n2);
    return 0;
}
