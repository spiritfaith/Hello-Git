#include <stdio.h>

int is_prime(int x)
{
    if (x == 1)
        return 0;
    int k;
    for (k = 2; k < x; k++)
        if (x % k == 0)
            return 0;
    return 1;
}

int solve(int sum)
{
    int p, q;
    int n = 0;
    for (p = 1; p <= sum; p++)
        for (q = 1; q <= sum; q++)
            if (p <= q && (p + q == sum) && is_prime(p) && is_prime(q))
            {
                printf("p=%d,q=%d\n", p, q);
                n++;
            }
    printf("%d\n", n);
}

int main()
{
    solve(3000);
    return 0;
}