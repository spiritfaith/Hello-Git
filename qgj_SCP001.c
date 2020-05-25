#include <stdio.h>

int main()
{
    int a[100];
    int i, n, k = 0, q;
    scanf("%d", &n);
    q = n;
    for (i = 0; i <= n; i++)
        a[i] = i + 1;
    for (i = 0;; i++)
    {
        if (i == n)
            i = 0;
        if (a[i] != 0)
            k++;
        if ((k % 3 == 0) && (a[i] != 0))
        {
            printf("%4d", a[i]);
            a[i] = 0;
            q--;
        }
        if (q == 0)
            break;
    }
}