#include <stdio.h>

#define SIZE 25
int main()
{
    int a[SIZE][SIZE];
    int n;
    int i, j;
    int sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                if (n%2 == 0)       // n为偶数
                    sum = sum + a[i][j]*a[i][j] + a[i][n+1-j]*a[i][n+1-j];
                else                // n为奇数
                {
                    if (i == (n/2+1) && j == (n/2+1))   // 扣掉中间的那个数
                    {
                        sum += a[i][j]*a[i][j];
                    }
                    else
                    {
                        sum = sum + a[i][j]*a[i][j] + a[i][n+1-j]*a[i][n+1-j];
                    }
                }
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}