/*************************/
/* to Calculate Surface Area And Volume Of Cuboid */
*/


#include<stdio.h>//preprocessor section
void FncalAreaVol(int,int,int,int *,int *);//function prototype
int main()//main function
{
    int length,breadth,height;//variable declaration
    int area=0,volume=0;//variable declaration and intialiasation
    scanf("%d %d %d",&length,&breadth,&height);//run time input
    FncalAreaVol(length,breadth,height,&area,&volume);//calling function
    printf("area of cuboid =%d\n",area);//display the value
    printf("volume of cuboid=%d\n\n",volume);//display the value
    return 0;
}

void FncalAreaVol(int l,int b,int h,int *a,int *v)//function definition
{
    *v=b*l*h;
    *a=2*(l*b+b*h+h*l);
}
