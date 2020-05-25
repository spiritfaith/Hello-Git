#include <stdio.h>
#define MAX 1000003
int a[MAX];
int main()
{
    int count, low, high, max, temp, i, j;
    long long tempi;
    //get the result form
    a[1] = 1;
    for (i = 2; i < 1000000; i++)
    {
        tempi = i;
        count = 0;
        while (tempi >= i)
        {
            if (tempi % 2 == 1)
                tempi = 3 * tempi + 1;
            else
                tempi /= 2;
            count++;
        }
        a[i] = a[tempi] + count;
    }
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
            if (a[j] > max)
                max = a[j];
        }
        printf("%d\n", max);
    }
    return 0;
}