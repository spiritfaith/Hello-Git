#include <stdio.h>

#define SIZE 500

int main()
{
    int n, tmp = 0;
    int i, flag = 1;
    int a[SIZE] = {0};
    a[1] = 0, a[2] = 1, a[3] = 1;
    scanf("%d", &n);
    if (3 >= n)
        printf("%d\n", flag);
    else
    {
        for (i = 4; i <= n; i++)
        {
            a[i] = a[i - 1] - 2 * a[i - 2];
            // tmp = (a[i] < tmp) ? a[i] : tmp;
            if (a[i] < tmp)
            {
                tmp = a[i];     // 取前n项最小的那项
                flag = i;       // flag记录当前最小的下标
            }
        }
        printf("%d\n", flag);
    }
    return 0;
}