#include <stdio.h>
#define SIZE 10
int main()
{
        int n, i;               // n表示向量的维数
        float a[SIZE] = { -100 }, b[SIZE] = { -100 };
        scanf("%d", &n);
        for (i = 0; i < n; i++) // 将第一个向量的各个数保存至数组a
        {
                scanf("%f", a + i);
        }
        for (i = 0; i < n; i++)
        {
                scanf("%f", b + i);
        }
        float c[SIZE] = { -100 };
        for (i = 0; i < n; i++) // 点乘需要先相乘再相加
        {
                c[i] = a[i] * b[i];     // 先相乘保存至数组c中
        }
        float sum = 0;
        for (i = 0; i < n; i++) // 接下来再相加
        {
                sum += c[i];
        }
        printf("%.2f", sum);
        return 0;
}