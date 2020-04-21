#include <stdio.h>

int main()
{
    int arr[100] = {1, 2, 3, 4};
    int *p = arr;
    printf("%d %d\n", arr[1], p[1]);
    return 0;
}