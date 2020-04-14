#include <stdio.h>
// 输入小李和小张的年龄，输出他们的平均年龄。
int main()
{
    int a, b;
    float aver;
    scanf("%d%d", &a, &b);
    aver = ((float)a + (float)b) / 2;
    printf("%.1f\n", aver);
    return 0;
}