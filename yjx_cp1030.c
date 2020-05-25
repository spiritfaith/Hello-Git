#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    while (1)
    {
        scanf("%d", &n);
        if (0 == n) break;
        sum += n;
    }
    printf("%d\n", sum);
    return 0;
}