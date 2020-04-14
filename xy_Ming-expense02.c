#include <stdio.h>

int main()
{
    int i, n = 0;// n是一个起标志作用的变量，让电脑输出"YES"或"NO"的标志
    float a[7], b;// b是输入值的中间变量，a是需要被赋值的数组expense
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &b);
        a[i] = b;
    }
    for (i = 1; i < 6; i++)
    {
        if (a[i] > 50 && a[i - 1] > 50 && a[i + 1] > 50)
        {
            printf("YES\n");
            n++;
        }
    }
    if (n == 0)
        printf("NO\n");
    return 0;
}