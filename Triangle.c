#include <stdio.h>
// 输入3个边长，判断它们所组成的是否是一个三角形。
// "YES"    "NO"
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}