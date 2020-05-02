#include <stdio.h>

int main()
{
    float f1[100], f2[100];
    int n, m;
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
        scanf("%f", &f1[i]);
    scanf("%d", &m);
    for (int i = m; i >= 0; i--)
        scanf("%f", &f2[i]);
    float rlt[200];
    for (int i = 0; i < 200; i++)
        rlt[i] = 0;
    for (int i = m + n; i >= 0; i--)
        for (int i1 = n; i1 >= 0; i1--)
            for (int i2 = m; i2 >= 0; i2--)
                if (i1 + i2 == i)
                    rlt[i] += f1[i1] * f2[i2];
    for (int i = m + n; i > 0; i--)
        printf("%.2fx^%d + ", rlt[i], i);
    printf("%.2f", rlt[0]);
    return 0;
}