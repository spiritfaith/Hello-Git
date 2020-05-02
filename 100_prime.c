#include <stdio.h>
#include <math.h>

int IsPrime(int x);

int main()
{
    int i, n = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (IsPrime(i))
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}

int Prime(int x)
{
    int i, squareRoot;
    if (x <= 1)
        return 0;
    
}