#include <stdio.h>

int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int mul(int i, int n)
{
    if (n % i == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, m, i, res;
    scanf("%d", &n);
    m = n * n + 1;
    for (i = 1; i <= m; i++)
    {
        if (mul(i, m) && prime(i))
        {
            res = i;
        }
    }
    printf("%d\n", res);
    return 0;
}