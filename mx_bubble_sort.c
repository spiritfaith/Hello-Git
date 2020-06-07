#include <stdio.h>

#define N 500

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

int main()
{
    int n, j, k, t;
    int i = 0;
    int a[N];
    while (n != -1)
    {
        scanf("%d", &n);
        if (prime(n))
        {
            a[i] = n;
            i++;
        }
    }
    if (i == 0)
    {
        printf("%d\n", -1);
    }
    else if (i != 0)
    {
        for (k = 0; k < i; ++k)     // bubble_sort
        {
            for (j = 0; j < i - 1 - k; j++)
            {
                if (a[j] > a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
        printf("%d\n", a[i - 1]);
    }
    return 0;
}