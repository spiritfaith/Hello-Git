#include <stdio.h>
void peak_num(void);
int get_num(int height[], int m);

int get_num(int height[], int m)
{
    // your code - start
    int count = 0;
    // 先是第三种情况，只有一个山峰，直接输出该山峰
    if (1 == m)
    {
        return 1;
    }
    // 第一种情况：下标为0的山峰只需和右边的山峰进行比较
    else if (height[0] > height[1])
    {
        count++;
    }
    // 第二种情况：下标为m-1的山峰只需和左边的山峰进行比较
    else if (height[m - 1] > height[m - 2])
    {
        count++;
    }
    // 最后一种情况：就是和旁边的山峰比较
    int i;
    for (i = 1; i < m-1; i++)
    {
        if (height[i] > height[i - 1] && height[i] > height[i + 1])
        {
            count++;
        }
    }
    return count;
    // your code - end
}

void peak_num(void)
{
    int height[50];
    int k, n;
    scanf("%d", &n);        // 总共的输入示例
    for (k = 0; k < n; k++)
    {
        int j, m;
        scanf("%d", &m);        // 该示例下的山峰个数
        for (j = 0; j < m; j++)
            scanf("%d", &height[j]);    // 输入每个山峰高度
        printf("%d\n", get_num(height, m)); // 输出该示例下局部山峰个数
    }   // 传入get_num的参数有在该示例下，存有山峰高度的数组height，和局部山峰的个数
}

int main()
{
    peak_num();
    return 0;
}
