#include <stdio.h>

#define SIZE 90

int main()
{
    char s[SIZE];
    char c;
    int count = 0, m;
    int i = 0;
    while ((c = getchar()) != '\n')     // 完成字符串输入加复制到s字符数组
    {
        count++;
        s[count] = c;
        /* if (count == m)
        {
            printf("%c", c);
        } */
    }
    scanf("%d", &m);
    if (m < 0 || m > count)
        printf("Err input!\n");
    for (i = m; i <= count; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}

// 如果输入的整数m大于输入的字符串长度不合法数据，则给出提示信息，提示信息格式为：