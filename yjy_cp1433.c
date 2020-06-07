#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a[20][2];
    int i, k, z, ak0, ak1;
    for (i = 0; i <= 19; i++)
    {
        scanf("%d", &a[i][0]);
        scanf("%d", &a[i][1]);
        if (a[i][0] == 0)
            break;
    }
    for (k = 0; k <= i - 1; k++)
    {
        for (z = k + 1; z <= i; z++)
        {
            if (a[k][0] * a[k][1] < a[z][0] * a[z][1])
            {
                ak0 = a[k][0];
                ak1 = a[k][1];
                a[k][0] = a[z][0];
                a[k][1] = a[z][1];
                a[z][0] = ak0;
                a[z][1] = ak1;
            }
        }
    }
    for (k = 0; a[k][0] != 0; k++)
    {
        printf("%d %d\n", a[k][0], a[k][1]);
    }
    return 0;
}