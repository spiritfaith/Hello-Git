#include <stdio.h>
int main()
{
    int n, i, j, c, s, h;
    scanf("%d", &n);
    for (i = n;; i++)
    {
        c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c += 1;
            }
        }
        if (c == 0)
        {
            s = i - n;
            break;
        }
    }
    for (i = n;; i--)
    {
        c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c += 1;
            }
        }
        if (c == 0)
        {
            h = n - i;
            break;
        }
    }
    if (h < s)
    {
        s = h;
    }
    printf("%d\n", s);
    return 0;
}