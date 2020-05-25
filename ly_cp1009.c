#include <stdio.h>
int prime(int n)        // 判断素数
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;   // 不是素数
        }
    }
    return 1;   //是素数
}
int mul(int i, int n)   // 判断是否有因子
{
    if (n % i == 0)
        return 0;// 有因子
    else
        return 1;// 无因子
}

int main()
{
    int n, m, i, res;
    scanf("%d", &n);
    m = n * n + 1;
    for (i = 1; i <= m; i++)
    {
        if (mul(i, m))  // 先判断是否有因子
        {
            printf("%d", m);
            break;
        }
        else if (prime(i))   // 再判断是否为素因子
        {
            res = i;
        }
    }
    printf("%d\n", res);
    return 0;
}