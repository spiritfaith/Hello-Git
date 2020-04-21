#include <stdio.h>

int main()
{
    int a, *p = &a;
    char *q = (char *)&a;
    printf("%p %p", p, q);
    printf("%p %p", p + 1, q + 1);
    return 0;
}