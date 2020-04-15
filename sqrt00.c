#include <stdio.h>
#include<math.h>
// 输入一个数，计算其平方根。
int main()
{
    float a;
    double b;
    scanf("%f", &a);
    b = sqrt((double)a);
    printf("%.2f\n", (float)b);
    return 0;
}