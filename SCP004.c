#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE];
    int i, j;
    int sum = 0;
    int hund, ten, units;
    for (i = 100; i < 1000; i++)
    {
        
        units = i % 10;     // 个位数
        hund = i / 100;     // 百位数
        ten = (i - units - hund*100)/10;
        sum = units*units*units + hund*hund*hund + ten*ten*ten;
        if (sum == i)// 判断3次方之和是否为原来的数
        {
            printf("%6d", i);
        }
    }
    return 0;
}