#include <stdio.h>


// x:birds   x * 2 + (36 - x) * 4 = 100
int main()
{
    int i;// 鸟
    for (i = 1; i <= 36; i++)
    {
        if ((i * 2 + (36 - i) * 4) == 100)
        {
            printf("%6d%6d", 36-i, i);
            break;
        }
    }
    return 0;
}