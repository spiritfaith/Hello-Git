#include <stdio.h>
// 3 1 2 5      1 1 3
int main()
{
    int an[100], ret[100];
    int flag1 = 0, flag2 = 0, flag3 = 0;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &an[flag1]);
        flag1++;
    }
    for (i = 0; i < n; i++)
    {
        if (0 == flag2)
            ret[0] = an[0];
        else
            ret[i] = an[i] - an[i - 1];
        flag2++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%6d", ret[flag3]);
        flag3++;
    }
    return 0;
}