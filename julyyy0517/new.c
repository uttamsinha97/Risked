#include <stdio.h>

int main()
{
    int t,X,Y,i,j;
    int P[50],Q[50],R[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&X,&Y);
        for(i=1;i<=X;i++)
        scanf("%d",&P[i]);
        for(i=1;i<=Y;i++)
        scanf("%d",&Q[i]);
        for(i=1;i<=(X);i++)
        {
            R[i]=P[i];
        }
        for(i=1;i<=Y;i++)
        {
            R[X+i]=Q[i];
        }
        int t;
        for(i=1;i<=(X+Y);i++)
        {
            for(j=1;j<=(X+Y)-i;j++)
            {
                if(R[j]<R[j+1])
                {
                    t=R[j];
                    R[j]=R[j+1];
                    R[j+1]=t;
                }
            }
        }
        for(i=1;i<=(X+Y);i++)
        printf("%d ",R[i]);

    }
    return 0;
}
