#include <stdio.h>

#define SIZE 20

int main()
{
    int n, i, j;
    int sum = 0;
    int a[SIZE][SIZE];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == j) || (i+j == n-1))
                sum += a[i][j] * a[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}