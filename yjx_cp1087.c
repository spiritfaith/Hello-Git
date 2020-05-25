#include <stdio.h>

int main()
{
    int n = 0;
    int tmp = 0;
    while (-1 != n)
    {
        scanf("%d", &n);
        tmp = tmp>n ? tmp : n;
    }
    printf("%d", tmp);
    return 0;
}