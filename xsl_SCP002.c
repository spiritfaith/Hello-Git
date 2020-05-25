#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[101]={0},i,j,num=0,sum;
    for(i=1;i<=100;i++)
    {
        x[i]=i;
    }
    AGAIN:
    for(i=1;i<=100;i++)
    {
        if(x[i]!=0&&x[i]%5==0)
        {
            x[i]=0;
            num++;
            if(num==100)
            {
                printf("%d",i);
                break;
            }
        }
        if(x[i]!=0&&x[i]%5!=0)
        {
            sum=0;
            for(j=1;j<=100;j++)
            {
                if(x[j]==0)
                    sum++;
            }
            x[i]=x[i]+100-sum;
        }
        if(i==100)  goto AGAIN;
    }
    return 0;
}