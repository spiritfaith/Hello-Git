#include <stdio.h>
// 已知数列的递归表达式为an=an-1+an-2
/* 输入正整数m和n，输入格式"%d%d"
an=an-1+an-2,a1=a0=0.5
输出m项到n项的和（包括m项和n项），输出格式为"%.2f" */
float Series(int u);
float Sum(int x, int y);

int main()
{
    float sum = 0;
    int m = 0, n = 0;
    RESET:
    scanf("%d%d", &m, &n);
        if (m < 0 || n < 0) // 解决输入数据错误
        {
            goto RESET;
        }
        else if (m == n) // 解决输入相等
        {
            sum = Series(m);
        }
        else
        {
            sum = Sum(m, n); // 调用Sum函数计算m项到n项的值
        }
    printf("%.2f", sum);
    return 0;
}

float Sum(int x, int y) // Sum函数是用来累加m到n项的总和
{
    float sum0 = 0;
    for (; x <= y; x++)
    {
        sum0 = sum0 + Series(x);
    }
    return sum0;
}

float Series(int u) // Series函数就是本题中的数列,使用了递归
{
    float f;
    if (u == 0)
        f = 0.5;
    else if (u == 1)
        f = 0.5;
    else
    {
        f = Series(u - 1) + Series(u - 2);
    }
    return f;
}