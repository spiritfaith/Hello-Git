#include <stdio.h>
void peak_num(void);
int get_num(int height[], int m);
// get_num函数就是为了得到有几个山峰
int get_num(int height[], int m)
{
    int i = 0;
    int sum = 0;
    if (m == 1)
    {
        return 1;
    }
    if (height[0] > height[1]) //第一个高度大于第二个高度就算一个peak
    {
        sum++;
    }
    if (height[m - 1] > height[m - 2]) //最后一个高度高于倒数第二个
    {
        sum++;
    }
    for (i = 1; i < m - 1; i++)
    {
        if (height[i] > height[i + 1] && height[i] > height[i - 1])
        {
                sum++;
        }
    }
    return sum;
}

void peak_num(void)
{
    int height[50];
    int k, n;
    scanf("%d", &n);
    for (k = 0; k < n; k++) // n是上限值，
    {
        int j, m;
        scanf("%d", &m);                    // 输入一个数字m
        for (j = 0; j < m; j++)             // m是上限值
            scanf("%d", &height[j]);        // 不断读取m个高度值
        printf("%d\n", get_num(height, m)); // get_num函数就是为了得到有几个山峰
    }
}

int main()
{
    peak_num();
    return 0;
}