//我是直接复制他的代码然后改的，因为我觉得这样要简单一点，如果自己打的话我可能要出错
#include <stdio.h>
void peak_num(void);
int get_num(int height[], int m);

int get_num(int height[], int m)
{
    //我们只用写这个函数就可以了，他的代码把输入的数据都处理好了，传入这个函数的是一个数组height[](每一个数)和一个m(数的个数)

    // your code - start
    int cnt = 0; //定义山峰的个数，先为0
    {
        if (m == 1)
            return 1;                   //如果数组里面只有一个数，依照题目里面注意的第三点，山峰数就是1，所以这种情况直接return 1，后面的就不执行了
        for (int i = 1; i < m - 1; i++) //依照注意的1，2点，数组里面第1个数和最后一个数比较麻烦，就先不管，先一个个判断中间的是不是山峰
        {
            if (height[i - 1] < height[i] && height[i + 1] < height[i])
                cnt++;
        }
        if (height[0] > height[1]) //判断第一个和最后一个是不是山峰
            cnt++;
        if (height[m - 1] > height[m - 2])
            cnt++;
    }
    return cnt;
    // your code - end
}

void peak_num(void)
{
    int height[50];
    int k, n;
    scanf("%d", &n);
    for (k = 0; k < n; k++)
    {
        int j, m;
        scanf("%d", &m);
        for (j = 0; j < m; j++)
            scanf("%d", &height[j]);
        printf("%d\n", get_num(height, m));
    }
}

int main()
{
    peak_num();
    return 0;
}