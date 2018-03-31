#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
    int xcor,ycor;

}point;
int main()
{
point p1,p2;
float distance;
int diffx,diffy;
printf("\nenter coordinates of the first point\n");
scanf("%d%d",&p1.xcor,&p1.ycor);
printf("\nenter coordinates of the second point\n");
scanf("%d%d",&p2.xcor,&p2.ycor);
printf("\ndistance between the two points is %g units\n",distance);
return 0;
}
int dis(p2.xcor,p1.xcor,p2.ycor,p1.ycor )
{
    diffx=p2.xcor-p1.xcor;
diffy=p2.ycor-p1.ycor;
distance=sqrt(((diffx)*(diffx)+(diffy)*(diffy)));
return distance;


}
