#include <stdio.h>

int cubes(int n);

int cubes(int n)
{
    return n*n*n;
}

int main()
{
    int n, m;
    int i, j;
    int sum = 0;
    scanf("%d%d", &n, &m);  // n小，m大
    if (-n == m)
    {
        printf("%d\n", 0); // 正负相等，为0
        return 1;
    }
    else if (n<0 && -n<m)
        n = -n; // 只需求-n到m的立方和
    else if (m < 0 && -n>m)
        n = -n, m = -m;
    // 求立方和
    if (n>m)
    {
        for (i = m; i <= n; i++)
            sum += cubes(i);
    }
    else
    {
        for (i = n; i <= m; i++)
            sum += cubes(i);
    }
    if (n>m) sum = -sum;
    printf("%d\n", sum);
    return 0;
}