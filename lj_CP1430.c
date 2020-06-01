#include <stdio.h>
int main()
{
    int n, m;
    int i;
    int sum = 0;
    scanf("%d%d", &n, &m);
    for (i = n; i <= m; i++)
    {
        sum += i * i * i;
    }
    printf("%d\n", sum);
    return 0;
}