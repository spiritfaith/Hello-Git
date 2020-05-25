#include <stdio.h>

int getLength(long long n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 1)
        return 1 + getLength(3 * n + 1);
    else
        return 1 + getLength(n / 2);
}
int main()
{
    int low, high, max, temp, j, result;
    while (scanf("%d %d", &low, &high) != EOF)
    {
        max = 1;
        printf("%d %d ", low, high);
        //if low is greater than high, exchange them
        if (low > high)
        {
            temp = low;
            low = high;
            high = temp;
        }
        //find the greatest number
        for (j = low; j <= high; j++)
        {
            result = getLength(j);
            if (result > max)
                max = result;
        }
        printf("%d\n", max);
    }
    return 0;
}