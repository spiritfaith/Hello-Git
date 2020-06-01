#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 500

int main()
{
    char s[SIZE+1];
    int count = 0;
    int i, j;
    int len;
    scanf("%s", s);
    len = strlen(s);
    // printf("%d\n", len);
    for (i = 0; i < len; i++)
    {
        if (i%2 == 0)       // 数组里的偶数位就是奇数位
        {
            if (!isdigit(s[i]))     // 如果不是数字，那一定是字符
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}