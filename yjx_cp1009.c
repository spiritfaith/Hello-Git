#include <stdio.h>
#include <math.h>

#define SIZE 10
#define TRUE 1
#define FALSE 0

int prime(int n);

int main()
{
        int n;
        int count[SIZE];
        int i, j, l;
        long k;
        scanf("%d", &n);
        int a = n * n + 1;
        // 本题要求输出最大素因子
        // 那么如果这个数本身是质数，最大素因子就是自己
        // 还有可能不是质数，那么下一对里面取最大即可，但得是素数因子
        if (prime(a)) // odd num
        {
                printf("%d\n", a);
        }
        else // even num
        {
                k = sqrt((double)n) + 1;
                for (i=0, j=2; j <= k; i++, j++)
                {
                        // 通过简单分析发现，如果是合数，那么large one一定存在于下一个组合
                        int m;
                        m = a % j;
                        if (0 == m)     // 只判断了有因子
                        {
                                if (prime(m))// 还得是素数因子
                                {
                                        l = a / j;
                                        count[i] = (l > j) ? l : j;// large one
                                        break;
                                }
                        }
                }
                // printf("%d\n", *(count + i));
                printf("%d\n", count[i]);
        }
        return 0;
}

int prime(int n)
{
        long k;
        int j;
        k = sqrt((double)n) + 1;
        for (j = 2; j <= k; j++)
        {
                if (0 == n%j)
                {
                        return FALSE; // n能被j整除，不是素数，返回FALSE
                }
        }
        return TRUE; // n是素数，返回TRUE
}