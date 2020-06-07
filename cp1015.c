#include <stdio.h>
#define SIZE 20
int main()
{
        int num;
        scanf("%d", &num);
        // 将输入数字拆分并保存至数组
        int a[SIZE];
        int i = 0;
        for (i = 0; 0 != num; i++)              // 当0==num时退出循环
        {
                a[i] = num % 10;                // 获取个位数并并存入数组
                num /= 10;                      // 将个位数移除，不断减少位数
        }
        /* printf("%d\n", i);                   // 这里的i就代表拆分出来数字的个数
        exit(1); */
        // 上面已经完成存入数组的任务
        // 接下来，就需要记录不同数字的个数
        int count = 0;
        int j = 0;
        int k = 0;
        int l = 0;
        int tmp = 0;
        if (0 == j)                     // 第一位数直接先count++，下面j从1开始
                count++;
        for (j = 1; j < i; j++)         // 外层循环来遍历我们拆分后存入数组的数
        {
                // 内层循环将当前数字与之前的每个数字进行比较
                // for (k = j - 1; k >= 0; k--)
                // {
                        for (l = 1; l <= j; l++)
                        {
                                if (a[j - l] != a[j])
                                {
                                        tmp++;
                                }
                                else    // 一旦我发现一个与现在的数字相同，我就不count++
                                {
                                        tmp = 0;
                                        break;
                                }
                        }
                        if (0 != tmp)   count++;
                // }
        }
        printf("%d\n", count);
        return 0;
}