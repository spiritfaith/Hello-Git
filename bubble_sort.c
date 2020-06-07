#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void bubble_sort(int a[], int n)
{
    int i, j;
    int tmp;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (a[j-1] > a[j])
            {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
}

void bubble_sort_t(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (a[j - 1] > a[j])
            {
                int t;
                t = a[j - 1], a[j - 1] = a[j], a[j] = t;
            }
        }
    }
}

int main()
{
    int a[SIZE];
    int n, i, j;
    scanf("%d", &n); // n是需要排序数组元素的个数
    for (i = 0, j = n; i < n; i++, j--)
    {
        a[i] = j;
    }
    printf("not sorted:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    bubble_sort(a, n);
    printf("sorted:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}