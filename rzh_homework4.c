#include <stdio.h>

#define SIZE 25
int main()
{
    int a[SIZE][SIZE];
    int i, j;
    int n;
    scanf("%d", &n);                // 用户输入n表示接下来的矩阵为n*n阶
    for (i = 1; i <= n; i++)        // for循环来实现输入矩阵数据
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for (i = 1; i <= n; i++)        // for循环用来判断是否为对称矩阵
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == a[j][i])
            {
                count++;
            }

        }
    }
    int tmp;
    if (n*n == count)       // 是对称矩阵
    {
        printf("该矩阵是对称矩阵");
    }
    else        // 不是对称矩阵，输出转置矩阵
    {
        for (i = 1; i <= n; i++)         // for循环将原矩阵改为转置矩阵
        {
            j = i;              // 这里我们把n*n阶矩阵转化为(n-1)*(n-1)阶矩阵，因为当i走完了第一行
            for (; j <= n; j++) // 实际上第一列的元素也都换完了，所以我们只需要考虑剩下的(n-1)*(n-1)阶矩阵
            {                   // 这就实现了将大问题转化为小问题，逐步求解，让计算机帮我们实现这个大化小的过程
                tmp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = tmp;
            }
        }
        for (i = 1; i <= n; i++)        // for循环来实现输出矩阵数据
        {
            for (j = 1; j <= n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}