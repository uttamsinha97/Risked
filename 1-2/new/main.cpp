#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include <iostream>
using namespace std;
class record
{
    private:
    char time[6];
    char name[30];
    char place[25];
    char duration[10];
    char note[500];
    public:
    int password();
    void addrecord();
    void viewrecord();
    void editrecord();
    void editpassword();
    void deleterecord();
};
void record ::addrecord()
{
    FILE *fp ;
    char another = 'Y' ;
    record e ;
    char filename[15];
    int choice;
    cout<<"\n\n\t\t***************************\n";
    cout<<"\t\t* WELCOME TO THE ADD MENU *";
    cout<<"\n\t\t***************************\n\n";
    cout<<"\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
    fflush(stdin);
    gets(filename);
    fp = fopen (filename, "ab+" ) ;
    if ( fp == NULL )
        {
            fp=fopen(filename,"wb+");
            if(fp==NULL)
                {
                    cout<<"\nSYSTEM ERROR...";
                    cout<<"\nPRESS ANY KEY TO EXIT";
                    getch();
                    return ;
                }
        }
        while ( another == 'Y'|| another=='y' )
            {
                choice=0;
                fflush(stdin);
                cout<<"\n\tENTER TIME:[hh:mm]:";
                cin>>time;
                rewind(fp);
                while(fread(&e,sizeof(e),1,fp)==1)
                    {
                        if(strcmp(e.time,time)==0)
                        {
                            cout<<"\n\tTHE RECORD ALREADY EXISTS.\n";
                            choice=1;
                        }
                    }
                if(choice==0)
                    {
                        strcpy(e.time,time);
                        cout<<"\tENTER NAME:";
                        fflush(stdin);
                        gets(e.name);
                        fflush(stdin);
                        cout<<"\tENTER PLACE:";
                        cin.getline(e.place,200);
                        fflush(stdin);
                        cout<<"\tENTER DURATION:";
                        cin.getline(e.duration,200);
                        fflush(stdin);
                        cout<<"\tNOTE:";
                        cin.getline(e.note,200);
                        fwrite ( &e, sizeof ( e ), 1, fp ) ;
                        cout<<"\nYOUR RECORD IS ADDED...\n";
                    }
                    cout<< "\n\tADD ANOTHER RECORD...(Y/N) "  ;
                    fflush ( stdin ) ;
                    another = getchar( ) ;
                }
                fclose ( fp ) ;
                cout<<"\n\n\tPRESS ANY KEY TO EXIT...";
                getch();
}
void record:: viewrecord( )
{

        FILE *fpte ;
        record customer ;
        char time[6],choice,filename[14];
        int ch;
        cout<<"\n\n\t\t*******************************\n";
        cout<<"\t\t* HERE IS THE VIEWING MENU *";
        cout<<"\n\t\t*******************************\n\n";
        choice=password();
        if(choice!=0)
            {
                return ;
            }
        do
            {
                cout<<"\n\tENTER THE DATE OF RECORD TO BE VIEWED:[yyyy-mm-dd]:";
                fflush(stdin);
                gets(filename);
                fpte = fopen ( filename, "rb" ) ;
                if ( fpte == NULL )
                    {
                        cout<<"\nTHE RECORD DOES NOT EXIST...\n";
                        cout<<"PRESS ANY KEY TO EXIT...";
                        getch();
                        return ;
                    }
                    cout<<"\n\tHOW WOULD YOU LIKE TO VIEW:\n";
                    cout<<"\n\t1.WHOLE RECORD OF THE DAY.";
                    cout<<"\n\t2.RECORD OF FIX TIME.";
                    cout<<"\n\t\tENTER YOUR CHOICE:";
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            cout<<"\nTHE WHOLE RECORD FOR  IS:"<<filename;
                            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
                                {
                                    cout<<"\nTIME: "<<customer.time;
                                    cout<<"\nMEETING WITH: "<<customer.name;
                                    cout<<"\nMEETING AT: "<<customer.place;
                                    cout<<"\nDURATION: "<<customer.duration;
                                    cout<<"\nNOTE: "<<customer.note<<endl;
                                }
                            break;
                        case 2:
                            fflush(stdin);
                            cout<<"\nENTER TIME:[hh:mm]:";
                            cin>>time;
                            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
                                {
                                    if(strcmp(customer.time,time)==0)
                                    {
                                        cout<<"\nYOUR RECORD IS:";
                                        cout<<"\nTIME: "<<customer.time;
                                        cout<<"\nMEETING WITH: "<<customer.name;
                                        cout<<"\nMEETING AT: "<<customer.place;
                                        cout<<"\nDUARATION: "<<customer.duration;
                                        cout<<"\nNOTE: "<<customer.note;
                                    }
                                }
                            break;
                        default: cout<<"\nYOU TYPED SOMETHING ELSE...\n";break;
                }
                cout<<"\n\nWOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):";
                fflush(stdin);
                cin>>choice;
            }
            while(choice=='Y'||choice=='y');
            fclose ( fpte ) ;
            return ;
}
void record::editrecord()
{
    FILE *fpte ;
    record customer ;
    char time[6],choice,filename[14];
    int num,count=0;
    cout<<"\n\n\t\t*******************************\n";
    cout<<"\t\t* WELCOME TO THE EDITING MENU *";
    cout<<"\n\t\t*******************************\n\n";
    choice=password();
    if(choice!=0)
        {
            return ;
        }

        do
            {
                cout<<"\n\tENTER THE DATE OF RECORD TO BE EDITED:[yyyy-mm-dd]:";
                fflush(stdin);
                gets(filename);
                cout<<"\n\tENTER TIME:[hh:mm]:";
                cin>>time;
                fpte = fopen ( filename, "rb+" ) ;
                if ( fpte == NULL )
                    {
                        cout<<"\nRECORD DOES NOT EXISTS:"  ;
                        cout<<"\nPRESS ANY KEY TO GO BACK";
                        getch();
                        return;
                    }
                while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )
                {
                    if(strcmp(customer.time,time)==0)
                    {
                        cout<<"\nYOUR OLD RECORD WAS AS:";
                        cout<<"\nTIME: "<<customer.time;
                        cout<<"\nMEETING WITH: "<<customer.name;
                        cout<<"\nMEETING AT: "<<customer.place;
                        cout<<"\nDURATION: "<<customer.duration;
                        cout<<"\nNOTE: "<<customer.note;
                        cout<<"\n\n\t\tWHAT WOULD YOU LIKE TO EDIT..";
                        cout<<"\n1.TIME.";
                        cout<<"\n2.MEETING PERSON.";
                        cout<<"\n3.MEETING PLACE.";
                        cout<<"\n4.DURATION.";
                        cout<<"\n5.NOTE.";
                        cout<<"\n6.WHOLE RECORD.";
                        cout<<"\n7.GO BACK TO MAIN MENU.";
                        do
                            {
                                cout<<"\n\tENTER YOUR CHOICE:";
                                fflush(stdin);
                                cin>>num;
                                fflush(stdin);
                                switch(num)
                                {
                                    case 1: cout<<"\nENTER THE NEW DATA:";
                                    cout<<"\nNEW TIME:[hh:mm]:";
                                    cin.getline(customer.time,200);
                                    break;
                                    case 2: cout<<"\nENTER THE NEW DATA:";
                                    cout<<"\nNEW MEETING PERSON:";
                                    cin.getline(customer.name,200);
                                    break;
                                    case 3: cout<<"\nENTER THE NEW DATA:";
                                    cout<<"\nNEW MEETING PLACE:";
                                    cin.getline(customer.place,200);
                                    break;
                                    case 4: cout<<"\nENTER THE NEW DATA:";
                                    cout<<"\nDURATION:";
                                    cin.getline(customer.duration,200);
                                    break;
                                    case 5: cout<<"ENTER THE NEW DATA:";
                                    cout<<"\nNOTE:";
                                    cin.getline(customer.note,200);
                                    break;
                                    case 6:  cout<<"\nENTER THE NEW DATA:";
                                    cout<<"\nNEW TIME:[hh:mm]:";
                                    cin.getline(customer.time,200);
                                    cout<<"\nNEW MEETING PERSON:";
                                    cin.getline(customer.name,200);
                                    cout<<"\nNEW MEETING PLACE:";
                                    cin.getline(customer.place,200);
                                    cout<<"\nDURATION:";
                                    cin.getline(customer.duration,200);
                                    cout<<"\nNOTE:";
                                    cin.getline(customer.note,200);
                                    break;
                                    case 7: cout<<"\nPRESS ANY KEY TO GO BACK...\n";
                                    getch();
                                    return ;
                                    break;
                                    default: cout<<"\nYOU TYPED SOMETHING ELSE...TRY AGAIN\n";
                                    break;
                                    }
                        }while(num<1||num>8);
                        fseek(fpte,-sizeof(customer),SEEK_CUR);
                        fwrite(&customer,sizeof(customer),1,fpte);
                        fseek(fpte,-sizeof(customer),SEEK_CUR);
                        fread(&customer,sizeof(customer),1,fpte);
                        choice=5;
                        break;
                    }
            }
            if(choice==5)
            {
                    cout<<"\n\t\tEDITING COMPLETED...\n";
                    cout<<"--------------------\n";
                    cout<<"THE NEW RECORD IS:\n";
                    cout<<"--------------------\n";
                    cout<<"\nTIME: "<<customer.time;
                    cout<<"\nMEETING WITH: "<<customer.name;
                    cout<<"\nMEETING AT: "<<customer.place;
                    cout<<"\nDURATION: "<<customer.duration;
                    cout<<"\nNOTE: "<<customer.note;
                    fclose(fpte);
                    cout<<"\n\n\tWOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)";
                    cin>>choice;
                    count++;
            }
            else
                {
                    cout<<"\nTHE RECORD DOES NOT EXIST::\n";
                    cout<<"\nWOULD YOU LIKE TO TRY AGAIN...(Y/N)";
                    cin>>choice;

                }
        }while(choice=='Y'||choice=='y');
        fclose ( fpte ) ;
        if(count==1)
            cout<<"\n FILE IS EDITED...\n"<<count;
        else if(count>1)
            cout<<"\n FILES ARE EDITED..\n"<<count;
        else
            cout<<"\nNO FILES EDITED...\n";
        cout<<"\tPRESS ENTER TO EXIT EDITING MENU.";
    getch();
}
int record::password()
{

        char pass[15]={0},check[15]={0},ch;
        FILE *fpp;
        int i=0,j;
        cout<<"::FOR SECURITY PURPOSE::";
        cout<<"::ONLY THREE TRIALS ARE ALLOWED::";
        for(j=0;j<3;j++)
            {
                i=0;
                cout<<"\n\n\tENTER THE PASSWORD:";
                pass[0]=getch();
                while(pass[i]!='\r')
                    {
                        if(pass[i]=='\b')
                        {
                            i--;
                            printf("\b");
                            printf(" ");
                            printf("\b");
                            pass[i]=getch();
                        }
                        else
                            {
                                printf("*");
                                i++;
                                pass[i]=getch();
                            }
                    }
                pass[i]='\0';
                fpp=fopen("SE","r");
                if (fpp==NULL)
                    {
                        cout<<"\nERROR WITH THE SYSTEM FILE...[FILE MISSING]\n";
                        getch();
                        return 1;
                    }
                else
                    i=0;
                    while(1)
                        {
                            ch=fgetc(fpp);
                            if(ch==EOF)
                                {
                                    check[i]='\0';
                                    break;
                                }
                            check[i]=ch-5;
                            i++;
                        }
                if(strcmp(pass,check)==0)
                    {
                        cout<<"\n\n\tACCESS GRANTED...\n";
                        return 0;
                    }
                else
                    {
                        cout<<"\n\n\tWRONG PASSWORD..\n\n\tACCESS DENIED...\n";
                    }

        }

        cout<<"\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO GO BACK...";
        getch();
        return 1;
}

void record::editpassword()
{
    char pass[15]={0},confirm[15]={0},ch;
    int choice,i,check;
    FILE *fp;
    fp=fopen("SE","rb");
    if(fp==NULL)
    {
        fp=fopen("SE","wb");
        if(fp==NULL)
            {
                cout<<"SYSTEM ERROR...";
                getch();
                return ;

            }

        fclose(fp);
        cout<<"\nSYSTEM RESTORED...\nYOUR PASSWORD IS 'ENTER'\n PRESS ENTER TO CHANGE PASSWORD\n\n";
        getch();
    }
    fclose(fp);
    check=password();
    if(check==1)
        {
            return ;
        }
    do
        {
            if(check==0)
            {
                i=0;
                choice=0;
                cout<<"\n\n\tENTER THE NEW PASSWORD:";
                fflush(stdin);
                pass[0]=getch();
                while(pass[i]!='\r')
                    {
                        if(pass[i]=='\b')
                        {
                            i--;
                            printf("\b");
                            printf(" ");
                            printf("\b");
                            pass[i]=getch();
                        }
                        else
                        {
                            printf("*");
                            i++;
                            pass[i]=getch();
                        }
                    }
                pass[i]='\0';
                i=0;
                cout<<"\n\tCONFIRM PASSWORD:";
                confirm[0]=getch();
                while(confirm[i]!='\r')
                    {
                        if(confirm[i]=='\b')
                        {
                            i--;
                            printf("\b");
                            printf(" ");
                            printf("\b");
                            confirm[i]=getch();
                        }
                        else
                        {
                            printf("*");
                            i++;
                            confirm[i]=getch();
                        }
                    }
                confirm[i]='\0';
                if(strcmp(pass,confirm)==0)
                {
                    fp=fopen("SE","wb");
                    if(fp==NULL)
                        {
                            cout<<"\n\t\tSYSTEM ERROR";
                            getch();
                            return ;
                        }
                i=0;
                while(pass[i]!='\0')
                {
                    ch=pass[i];
                    putc(ch+5,fp);
                    i++;
                }
                putc(EOF,fp);
                fclose(fp);
                }
                else
                    {
                        cout<<"\n\tTHE NEW PASSWORD DOES NOT MATCH.";
                        choice=1;
                    }
                }

}while(choice==1);


    cout<<"\n\n\tPASSWORD CHANGED...\n\n\tPRESS ANY KEY TO GO BACK...";
    getch();
}


void record::deleterecord( )
{

                FILE *fp,*fptr ;

                record file ;

                char filename[15],another = 'Y' ,time[10];;

                int choice,check;

                cout<<"\n\n\t\t*************************\n";

                cout<<"\t\t* WELCOME TO DELETE MENU*";

                cout<<"\n\t\t*************************\n\n";

                check = password();

                    if(check==1)

                    {

                        return ;

                    }


                while ( another == 'Y' )

                {

                cout<<"\n\n\tHOW WOULD YOU LIKE TO DELETE.";

                cout<<"\n\n\t#DELETE WHOLE RECORD\t\t\t[1]";

               cout<<"\n\t#DELETE A PARTICULAR RECORD BY TIME\t[2]";


                do

                {

                        cout<<"\n\t\tENTER YOU CHOICE:";

                       cin>>choice;


                    switch(choice)

                        {

                            case 1:

                            cout<<"\n\tENTER THE DATE OF RECORD TO BE DELETED:[yyyy-mm-dd]:";

                            fflush(stdin);

                            gets(filename);

                            fp = fopen (filename, "wb" ) ;

                            if ( fp == NULL )

                            {

                                cout<<"\nTHE FILE DOES NOT EXISTS";

                                cout<<"\nPRESS ANY KEY TO GO BACK.";

                                getch();

                                return ;

                            }

                            fclose(fp);

                            remove(filename);

                            cout<<"\nDELETED SUCCESFULLY...";

                            break;


                            case 2:

                            cout<<"\n\tENTER THE DATE OF RECORD:[yyyy-mm-dd]:";

                            fflush(stdin);

                            gets(filename);

                            fp = fopen (filename, "rb" ) ;

                            if ( fp == NULL )

                            {

                                cout<<"\nTHE FILE DOES NOT EXISTS";

                                cout<<"\nPRESS ANY KEY TO GO BACK.";

                                getch();

                                return ;

                            }

                            fptr=fopen("temp","wb");

                            if(fptr==NULL)

                            {

                                cout<<"\nSYSTEM ERROR";

                                cout<<"\nPRESS ANY KEY TO GO BACK";

                                getch();

                                return ;

                            }

                            cout<<"\n\tENTER THE TIME OF RECORD TO BE DELETED:[hh:mm]:";

                            fflush(stdin);

                            cin>>time;

                            while(fread(&file,sizeof(file),1,fp)==1)

                            {

                                if(strcmp(file.time,time)!=0)

                                fwrite(&file,sizeof(file),1,fptr);

                            }


                            fclose(fp);

                            fclose(fptr);

                            remove(filename);

                            rename("temp",filename);

                            cout<<"\nDELETED SUCCESFULLY...";

                            break;


                    default:

                            cout<<"\n\tYOU ENTERED WRONG CHOICE";

                            break;

                    }

                }while(choice<1||choice>2);



                    cout<<"\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):";

                    fflush(stdin);

                    cin>>another;

                }

                cout<<"\n\n\tPRESS ANY KEY TO EXIT...";

                getch();

}

int main()
{
    record a;
    int ch;
    cout<<"\n\n\t***********************************\n";
    cout<<"\t*PASSWORD PROTECTED PERSONAL DIARY*\n";
    cout<<"\t***********************************";
    while(1)
        {

                cout<<"\n\n\t\tMAIN MENU:";

                cout<<"\n\n\tADD RECORD\t[1]";

                cout<<"\n\tVIEW RECORD\t[2]";

                cout<<"\n\tEDIT RECORD\t[3]";

                cout<<"\n\tDELETE RECORD\t[4]";

                cout<<"\n\tEDIT PASSWORD\t[5]";

                cout<<"\n\tEXIT\t\t[6]";

                cout<<"\n\n\tENTER YOUR CHOICE:";

                cin>>ch;


            switch(ch)
            {
                            case 1:
                            a.addrecord();
                            break;
                            case 2:
                            a.viewrecord();
                            break;
                            case 3:
                            a.editrecord();
                            break;
                            case 4:
                            a.deleterecord();
                            break;
                            case 5:
                            a.editpassword();
                            break;
                            case 6:
                            cout<<"n\n\t\tTHANK YOU FOR USING THE PROGRAM BY:\n\n\tSURBHI JAIN\n\n\tUTTAM SINHA...";
                            getch();
                            exit(0);
                            default:
                            cout<<"\nYOU ENTERED WRONG CHOICE..";
                            cout<<"\nPRESS ANY KEY TO TRY AGAIN";
                            getch();
                            break;
            }
        }

            return 0;

}
