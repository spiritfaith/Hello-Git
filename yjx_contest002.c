#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

int get_depth(char *s)
{
    int depth = 0, len_s = strlen(s);
    // your code - start
    // 右括号先进栈，然后左括号进栈，栈顶指针就指向左括号
    // 匹配左右括号后，count++;然后弹出这对左右括号，再进下一个括号
    // 重复上述过程
    char *p = s + 1; // 栈顶指针指向字符串数组首地址,首元素是",所以从s+1开始
    int i = 0, j = 0;
    char *count = NULL;
    for (i = 0; i < len_s - 1; i++)
    {
        count = p; // 每次循环前保留下p的地址
        p += i;
        if (')' == *p) // 括号超过2个的情况
        {              // 真正的维护stack
                       // i = 2    i = 3
            for (; *p != '"'; p--)
            {
                if (*(p - 1) == '(')
                {
                    depth++;        // "(())" len_s=4,depth=1   depth=2     "(00)"
                    *p = ' ';       // "()0"    "(000"
                    *(p - 1) = ' '; // "(00"    "(000"
                }
            }
        }
    }

    // your code - end
    printf("%d\n", depth);
}

int main()
{
    char s[MAX_LEN + 1];
    gets(s);
    get_depth(s);
    return 0;
}