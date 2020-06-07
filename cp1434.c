#include <stdio.h>
#include <math.h>

#define PAI 3.14

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%3d%8.3f\n", i, cos(i*PAI/180));
    }
    return 0;
}