#include <stdio.h>
#include <stdlib.h>
#define N  100
int main()
{
    int i=0;
    int a[N];
    for (i=0;i<100;i++)
    {
        a[i]=1;
    }
    int m =99;
    int cnt=0;
   // int u=0;
    do
    {
         int p=0;
         for (p=0;p<N;p++)
        {
            if(a[p]!=0)
            {
                cnt ++;
                if(cnt ==5)
                {
                    cnt =0;
                    m--;
                    a[p]=0;
                }
            }
        }
    }while (m!=0);
    for(i=0;i<N;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",i+1);
        }
    }
    return 0;
}