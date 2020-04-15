#include <stdio.h>
// 输入月份，输出这个月多少天。
int main()
{
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int days[13] = {31, 28, 29, 31, 30, 31, 30, 31, 31,
                    30, 31, 30, 31};
    int mon, day;
    scanf("%d", &mon);
    if (1 == mon)
    {
        printf("%d\n", days[0]); 
    }
    else if (2 == mon)
    {
        printf("%d/%d\n", days[1], days[2]);
    }
    else if (3 == mon)
    {
        printf("%d\n", days[3]);
    }
    else if (4 == mon)
    {
        printf("%d\n", days[4]);
    }
    else if (5 == mon)
    {
        printf("%d\n", days[5]);
    }
    else if (6 == mon)
    {
        printf("%d\n", days[6]);
    }
    else if (7 == mon)
    {
        printf("%d\n", days[7]);
    }
    else if (8 == mon)
    {
        printf("%d\n", days[8]);
    }
    else if (9 == mon)
    {
        printf("%d\n", days[9]);
    }
    else if (10 == mon)
    {
        printf("%d\n", days[10]);
    }
    else if (11 == mon)
    {
        printf("%d\n", days[11]);
    }
    else
    {
        printf("%d\n", days[12]); 
    }
    return 0;
}