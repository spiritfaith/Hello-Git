#include <stdio.h>

#define SIZE 500

void find_same(int a[], int n, int b[], int m)
{
    int i, j;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d\n", a[i]);
                count++;
                break;
            }
        }
    }
    if (0 == count)
        printf("NONE\n");
}

int main()
{
    int a[SIZE], b[SIZE];
    int n, m;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", b + i);
    }
    find_same(a, n, b, m);
    return 0;
}