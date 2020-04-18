#include <stdio.h>

int main()
{
    int a = 0x61626364;
    int *p = &a;
    char *q = (char *)&a;//括号里的代码作用是将a的首地址转换为指针类型
    printf("%x %c\n", *p, *q);
    return 0;
}