#include <stdio.h>
#define LENTH 10

int main()
{
    char str[LENTH + 1];
    int i = 0, j;
    str[i++] = ' ';
    str[i++] = ' ';
    str[i++] = ' ';
    for (j = 0; str[j] != '\0'; j++)
    {
        putchar(str[j]);
    }
    putchar('\n');
    return 0;
}