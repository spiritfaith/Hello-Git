#include <stdio.h>
#include <math.h>

#define SIZE 99

int main()
{
        int a[SIZE+1];
        int n = SIZE, i, j;
        int count = 0;
        int len = SIZE;
        for (i=1; i<=SIZE; i++) a[i]=i;
        // 设置一个报数器
        if (j==5|| j==10|| j==15|| 20==j|| 25==j|| 30==j|| 35==j ||40 == j || 45 == j||  50 == j || 55 == j||  60 == j||  65==j||  70==j||  75==j||  80==j||  85==j || 90==j || 95==j)
        for (i=1; i<=SIZE; i++)
        {
            for (j=i+1; j<=; j++)
            {
                if (a[i]!=0 && a[j]!=0 && j%5==0) a[j]=0;
                count++;
            }
            len -= count;
        }