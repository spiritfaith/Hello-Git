#include <stdio.h>

#define SIZE 25
int main()
{
    int n;
    int i, j;
    int a[SIZE][SIZE] = { 0 };
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }
    /* for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
    } */
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (1 == i%2)   // 奇数行
            {
                if (0 == a[i][j]%2)   // 偶数当做奇数
                {
                    count++;
                }
            }
            else    // 偶数行
            {
                if (1 == a[i][j]%2)     // 奇数
                {
                    count++;
                }
            }
        }
    }
    printf("%d %d\n", count, n*n-count);    // 输出奇数个数
    return 0;
}