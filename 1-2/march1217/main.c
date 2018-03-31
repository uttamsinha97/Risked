#include <stdio.h>

int main()
{
    int s,i,ts,t,avg;
    int arr[10];
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
	    scanf("%d",ts);
	    for(i=1;i<=ts;i++)
	    {
	        t=0;
	        scanf("%d",&arr[i]);
	        t=t+arr[i];
	        avg=t/ts;
	    }
	    printf("%d\n",avg);
	}
	return 0;
}
