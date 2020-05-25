#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

int get_depth(char *s)
{
    int depth = 0, len_s = strlen(s);
    // your code - start
    // 从右往左找，找到一个'(',就再回头找')',找到后就将这对都置为' '，并将depth自增
    // 再继续往右找
    // 重复上述过程，直至找到前引号，则输出depth

    // 左括号进栈，右括号不进栈
    // 找到一个左括号就扔进栈，且size++;将size赋值给depth；遇到右括号,size--;
    int size = 0; // 表示栈内拥有的左括号数
    int i = 0;
    for (i = 1; i < len_s-1; i++)
    {
        if ('(' == s[i])
        {
            size++;
            depth = depth>size ? depth : size;
        }
        else if (')' == s[i])
        {
            size--;
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
