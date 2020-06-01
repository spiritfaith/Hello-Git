#include <stdio.h>

#define DAYS 365
#define LEAP 366

int main()
{
    int today = 2;
    int year = 2019;
    int sum = 0;
    while (1)
    {
        if (2025 == year)
            break;
        // the year is leap year
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        {
            sum += LEAP;
        }
        else
        {
            sum += DAYS;
        }
        year++;
    }
    printf("%d\n", sum%7+2);
    return 0;
}