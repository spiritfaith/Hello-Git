#include <stdio.h>

int main()
{
    int sum1, sum2, sub;
    sum1 = ((1 + 100) * 100 / 2) * ((1 + 100) * 100 / 2);    // 和的平方
    sum2 = 100 * (100 + 1) * (2 * 100 + 1) / 6;    // 平方和
    sub = sum1 - sum2;  // 和的平方减平方的和
    printf("%d\n", sub);
    return 0;
}