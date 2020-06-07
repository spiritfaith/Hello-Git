#include <stdio.h>


int prime(int n)
{
    int i;
    if (n == 1)
        return 0;
    for (i = 2; i * i<= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int huiwen(int n)
{
    int a[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        a[0] = n / 100;
        a[2] = n % 10;
        a[1] = n - a[0]*100 - a[2]*1;
    }
    for (i = 0, j = 2; i < j; i++, j--)
    {
        if (a[i] == a[j])
            return 1;
    }
    return 0;
}


int main()
{
    int i;
    for (i = 100; i < 1000; i++)
    {
        if (prime(i))
        {
            if (huiwen(i))
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}