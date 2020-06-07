#include <stdio.h>
int main()
{
    int n, a, b, c, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}