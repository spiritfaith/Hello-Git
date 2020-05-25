#include <stdio.h>

int prime(int n);
int right(int n);
int left(int n);

int prime(int n)
{
    long k;
    int i;
    for (i = 2; i <= (n / 2); i++)
    {
        if (0 == n % i) // 非素数
            return 0;
    }
    return 1;
}

int left(int n)
{
    int j;
    for (j = n - 1; j > 1; j--)
    {
        if (prime(j))
            return n-j;
    }
}

int right(int n)
{
    int i;
    for (i = n + 1;; i++) // 处理大于情况
    {
        if (prime(i))
            return i-n;
    }
}

int main()
{
    int n, dist, dist_l, dist_r;
    int i, j;
    scanf("%d", &n);
    if (2 == n)
    {
        printf("%d\n", 3);
        return 1;
    }
    dist_l = left(n);
    dist_r = right(n);
    dist = (dist_l < dist_r) ? dist_l : dist_r;
    printf("%d\n", dist);
    return 0;
}