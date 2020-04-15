#include <stdio.h>
#define TIMES 1.852
// 输入海里数，计算对应的公里数。换算公式：1海里=1.852公里。
int main()
{
    float a, b;
    scanf("%f", &a);
    b = a * TIMES;
    printf("%.2f\n", b);
    return 0;
}