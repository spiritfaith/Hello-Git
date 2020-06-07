#include <stdio.h>

#define SIZE 10

void array_swap(int a[], int b[])
{
    int j, tmp;
    for (j = 0; j < SIZE; j++)
    {
        tmp = a[j];
        a[j] = b[j];
        b[j] = tmp;
    }
}

int main()
{
    int a[SIZE], b[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", b + i);
    }
    array_swap(a, b);
    for (i = 0; i < SIZE; i++)
    {
        printf("%6d", a[i]);
    }
    printf("\n");
    for (i = 0 ; i < SIZE; i++)
    {
        printf("%6d", b[i]);
    }
    printf("\n");
    return 0;
}