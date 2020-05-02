#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int i, j, c[10001];
    double m;
    m = sqrt(b);
    c[1] = 0;
    for (i = 2; i <= m; i++)
    {
        c[i] = i;
    }
    int prime[10001], num = 0;
    for (i = 2; i <= m; i++)
    {
        if (c[i] != 0)
        {
            prime[++num] = i;
            for (j = i; j <= m; j++)
            {
                if (c[j] % c[i] == 0 && c[j] / c[i] != 1)
                {
                    c[j] = 0;
                }
            }
        }
    }
    int d[260001], count = 1;
    for (j = a; j <= b; j++)
    {
        if (j == 1)
            d[count] = 0;
        else if (j % 2 == 0 && j != 2)
            d[count] = 0;
        else
            d[count] = j;
        count++;
    }
    for (i = 2; i <= num; i++)
    {
        count = 1;
        while (count <= b - a + 1)
        {
            if (d[count] == 0)
            {
                count++;
                continue;
            }
            if (d[count] % prime[i] == 0 && d[count] / prime[i] != 1)
            {
                d[count] = 0;
                count++;
                continue;
            }
            else
                count++;
        }
    }
    for (i = 1; i <= (count - 1); i++)
    {
        if (d[i])
        {
            printf("%d\n", d[i]);
        }
    }
}