#include <stdio.h>
#include <math.h>

#define SIZE 99

int main()
{
        int a[SIZE+1];
        int n = SIZE, i, j;
        int len = SIZE;
        for (i=1; i<=SIZE; i++) a[i]=i;
        for (i=1; i<=len; i++)
        {
                for (j=i+1; j<=SIZE; j++)
                {
                        if (a[i]!=0 && a[j]!=0 && j%5==0) a[j]=0;
                }
                for (j=0, len=0; a[j]!=0; j++,len++)
                        ;
        }
        for (i=1; a[i]==0; i++)
                ;
        printf("%d", i);
        return 0;
}