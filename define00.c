#include <stdio.h>
#define max(A, B) (A) > (B) ? (A) : (B)
//对于宏定义使用的技巧
int main()
{
    int a = 1, b = 99, c = 100, d = 999;
    printf("a和b中的较大者为：%d\n", max(a+b, c+d));
    return 0;
}