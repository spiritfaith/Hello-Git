#include <stdio.h>
#include <stdlib.h>

#define SIZE 21

void bubble_sort(int a[][2], int n)
{
    int i, j;
    // loop invariant: a[n - i ... n - 1] are top i elements.
    for (i = 0; i < n - 1; i++)
        // bubble 'out' the max element among a[0 ... n - i - 1]
        // to position a[n - i - 1]
        for (j = 1; j < n - i; j++)
            if (a[i][0]*a[i][1] < a[j][0]*a[j][1])
            {
                int t;
                int ai0, ai1;
                ai0 = a[i][0],
                ai1 = a[i][1];
                a[i][0] = a[j][0],
                a[i][1] = a[j][1],
                a[j][0] = ai0,
                a[j][1] = ai1;
            }
}

int main()
{
    int a[SIZE][2] = {0};
    int tmp1 = -100, tmp2 = -100;
    int i = 0, j = 0;
    while (tmp1 != 0)
    {
        scanf("%d%d", &tmp1, &tmp2);
        if (tmp1 != 0)
        {
            a[i][j] = tmp1;
            a[i][j + 1] = tmp2;
            i++;
        }
        j = 0;
    }
    // printf("%d\n", i);
    bubble_sort(a, i);
    for (i = 0; a[i][0] != 0; i++) {
        printf("%d %d\n", a[i][0], a[i][1]);
    }
    return 0;
}