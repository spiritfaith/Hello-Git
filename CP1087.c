#include <stdio.h>

int main()
{
    int c;
    int tmp;
    while ((c = getchar()) != '\n')
    {
        tmp = tmp>c ? tmp : c;
    }
    printf("%d", tmp-48);
    return 0;
}