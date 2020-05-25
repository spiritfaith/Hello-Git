#include <stdio.h>

int main()
{
        int a[10] = { 0 };
        int *p = NULL;
        for (p = a; p < a + 10; p++)
        {
                printf("%4d", *p);
        }
        return 0;
}