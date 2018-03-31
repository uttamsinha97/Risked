#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the x and y co-ordinates:\n");
    printf("x:");
    scanf("%f",&x);
    printf("\ny:");
    scanf("%f",&y);
    if (x==0&&y==0)
    printf("\n\n(%g,%g) lies on the origin.\n",x,y);

    else if(x==0&&y!=0)
    printf("\n\n(%g,%g) lies on the y axis.\n",x,y);

    else if(x!=0&&y==0)
    printf("\n\n(%g,%g) lies on the x axis.\n",x,y);

    else if(x>0&&y>0) printf("\n\n(%g,%g) lies in the first quadrant.\n",x,y);

    else if(x>0&&y<0) printf("\n\n(%g,%g) lies in the fourth quadrant.\n",x,y);

    else if(x<0&&y>0) printf("\n\n(%g,%g) lies in the second quadrant.\n",x,y);

    else
    printf("\n\n(%g,%g) lies in the third quadrant.\n",x,y);

}
