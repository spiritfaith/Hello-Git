#include <stdio.h>

int prime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i;
    int sum = 0;
    for (i = 300; i <= 500; i++)
    {
        if (prime(i))
        {
            printf("%d\t", i);
            sum++;
        }
    }
    printf("%d\n", sum);
    return 0;
}