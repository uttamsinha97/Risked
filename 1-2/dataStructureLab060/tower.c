#include <stdio.h>
void towers(int ,char, char, char);
int i=1;
void main()
{
    printf("enter the number of DISK(s) in THE TOWER OF HANOI\n");
    int n;
    scanf("%i",&n);
    towers(n,'A','B','C');
    printf("\n\nMINIMUM number of steps needed to solve %d DISKS in \"TOWER OF HANOI\" are ",n);
    printf("\n%d\n",i-1);

}
void towers(int n,char frompeg, char topeg,char auxpeg)
{
    if(n==1)
    {
        //printf("\n%s  %3d  %s %d  %s  %2c  %s  %2c","step",i++,">>  move  disk",n,"from peg",frompeg," To peg", topeg);
        //printf("\n%s  %3d  %s %d  %s  %2c  %s  %2c","step",i++,">>  move  disk",n,"from peg",frompeg," To peg", topeg);
         printf("\n%s  %3d  %s  %c  %s  %c","step",i++,">>  move  disk 1  from peg ",frompeg," To peg ", topeg);
            //printf("\n%s  %c  %s  %c","move  disk 1  from peg ",frompeg," To peg ", topeg);
            return ;
    }

towers(n-1,frompeg,auxpeg,topeg);
printf("\n%s  %3d  %s %d  %s  %2c  %s  %2c","step",i++,">>  move  disk",n,"from peg",frompeg," To peg", topeg);
//printf("\n%s %d  %s  %2c  %s  %2c","move  disk",n,"from peg",frompeg," To peg", topeg);
towers(n-1,frompeg,auxpeg,topeg);

}
