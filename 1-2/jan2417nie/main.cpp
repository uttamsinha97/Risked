#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<math.h>

COORD coord = {0,0};

void go_to_xy(int a,int b)
{
    coord.X=a;
    coord.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
typedef struct
{
    char name[40];
    long int pin;
     int mobno;
    char address[150];
}Letter;

int main()
{
    FILE *fp=NULL,*ft,*fd;
    Letter L;
    char another,choice;
    long int tmob;
    long int strsize;

        fp=fopen("POST.txt","r+");
        if(fp==NULL)
        {
            fp=fopen("POST.txt","w+");
            if(fp==NULL)
            {
                printf("\aSorry Something Went Wrong!!!!! :(");
                exit(0);
            }
        }
    strsize = sizeof(L);

    while(1)
    {
        system("cls");
        go_to_xy(30,10);
        printf("1. New Letter:");
        go_to_xy(30,12);
        printf("2. View Letters:");
        go_to_xy(30,14);
        printf("3. Deliver letter:");
        go_to_xy(30,16);
        printf("4. View Delivered Letter:");
        go_to_xy(30,18);
        printf("5. Exit");
        go_to_xy(30,20);
        printf("Your Choice:");
        fflush(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END);
            another='y';
            while(another == 'y')
            {
                printf("Enter The Name: ");
                fflush(stdin);
                scanf("%s",L.name);
                printf("\nEnter PinCode: ");
                scanf("%ld",&L.pin);
                printf("\nEnter Mobile Number: ");
                scanf("%d",&L.mobno);
                printf("\nEnter The Address(Max 150): ");
                fflush(stdin);
                scanf("%s",L.address);
                fprintf(fp,"%s\t%ld\t%ld\t%s\n",L.name,L.pin,L.mobno,L.address);
                printf("\nAdd Another Letter(y/n)?: ");
                fflush(stdin);
                scanf("%c",&another);
            }
            break;


        case '2':
            //fp=fopen("POST.txt","a");
            system("cls");
            rewind(fp);
            int flag=0;
            while(fscanf(fp,"%s\t%ld\t%ld\t%s\n",L.name,&L.pin,&L.mobno,L.address)!=EOF)
            {
                printf("\nName:%s\nPin Code:%ld\nMobile Number:%d\nAddress:%s\n",L.name,L.pin,L.mobno,L.address);
               flag=1;
            }
            if(flag==0)
                printf("\n We have no letter to deliver....");
            getch();
            break;
        case '4':
            fd=fopen("Deliver.txt","r+");
            system("cls");
            rewind(fd);
            while(fscanf(fd,"%s\t%ld\t%ld\t%s\n",L.name,&L.pin,&L.mobno,L.address)!=EOF)
            {
                printf("\nName:%s\nPin Code:%ld\nMobile Number:%d\nAddress:%s\n",L.name,L.pin,L.mobno,L.address);
            }
            getch();
            break;
        case '3':
                fd=fopen("Deliver.txt","a+");
                system("cls");
                another='y';
                while(another == 'y')
                {
                    printf("Enter PinCode Number To Deliver: ");
                    scanf("%ld",&tmob);

                    ft=fopen("Temp.txt","w+");
                    rewind(fp);
                    int flag=1;
                    int count=0;
                    while(fscanf(fp,"%s\t%ld\t%ld\t%s\n",L.name,&L.pin,&L.mobno,L.address)!=EOF)
                    {
                        if(tmob!=L.pin)
                        {
                           fprintf(ft,"%s\t%ld\t%ld\t%s\n",L.name,L.pin,L.mobno,L.address);

                        }
                        else
                        {
                          fprintf(fd,"%s\t%ld\t%ld\t%s\n",L.name,L.pin,L.mobno,L.address);
                          count++;
                          flag=0;
                        }

                    }
                    fclose(fp);
                    fclose(ft);
                    fclose(fd);
                    remove("POST.txt");
                    rename("Temp.txt","POST.txt");
                    fp=fopen("POST.txt","r+");
                    if(flag==1)
                            printf("\nSorry We Didn't Find Your Letter\a!!!!\n");
                    else
                    {
                        if(count<=5)
                          printf("We need %d postman to deliver these letters.",1);
                        else
                            printf("We need %d postman to deliver these letters.\n",ceil(count/5));
                    }
                    printf("\nDeliver Another Letter(y/n)?: ");
                    fflush(stdin);
                    scanf("%c",&another);

                }
                break;
        case '5':
                fclose(fp);
                exit(0);
            }
        }

    return 0;
}
