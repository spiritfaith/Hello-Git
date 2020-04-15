#include <stdio.h>
// 输入一元二次方程ax^2+bx+c=0中的参数a,b,c，输出解的个数。
int main()
{
    int a, b, c;
    int so1 = 2,
        so2 = 1,
        so3 = 0;
    scanf("%d%d%d", &a, &b, &c);
    if ((b * b - 4 * a * c) > 0)
    {
        printf("%d\n", so1);
    }
    else if ((b * b - 4 * a * c) == 0)
    {
        printf("%d\n", so2);
    }
    else
    {
        printf("%d\n", so3);
    }
    return 0;
}