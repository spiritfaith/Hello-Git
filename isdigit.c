#include <stdio.h>
#include <ctype.h>

int main()
{
    int va1 = 'h';
    int va2 = '2';
    if (isdigit(va1))
    {
        printf("va1 = |%c| 是一个数字\n", va1);
    }
    else
    {
        printf("va1 = |%c| 不是一个数字\n", va1);
    }
    if (isdigit(va2))
    {
        printf("va2 = |%c| 是一个数字\n", va2);
    }
    else
    {
        printf("va2 = |%c| 不是一个数字\n", va2);
    }
    return 0;
}