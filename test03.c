#include <stdio.h>
int main()
{
    int i, m, n, res, Ans = 1;//m和n是输入的两个数，res是最后结果
    scanf("%d%d", &m, &n);
    for(i = 1;i <= n; i++)
    {
        Ans = Ans * i;
        Ans = Ans % n;
    }
    res = Ans;
    printf("%d\n", res);
    return 0;
}