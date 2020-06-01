#include <stdio.h>

#define SIZE 101

int main()
{
        unsigned int n;
        double a[SIZE];
        scanf("%d", &n);
        unsigned int i = 0;
        for (i = 1; i <= n; i++)
        {
                a[i] = (double)i;
        }
        double sum = 1;
        for (i = 1; i <= n; i++)
        {
                sum *= a[i];
        }
        printf("%.0f\n", sum);
        return 0;
}