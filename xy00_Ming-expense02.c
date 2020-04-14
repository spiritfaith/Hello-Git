#include <stdio.h>

int main()
{
    int i, n = 0;
    float a[7], b;
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &b);
        a[i] = b;
    }
    for (i = 1; i < 6; i++)
    {
        if (n==0 && a[i] > 50 && a[i - 1] > 50 && a[i + 1] > 50)
        {
            printf("YES\n");
            n++;
        }
    }
    if (n == 0)
        printf("NO\n");

    return 0;
}