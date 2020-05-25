#include <stdio.h>

#include <string.h>

int main()
{
    int j, k, i, t, n;
    char s[10][80], b[10][80];
    for (i = 0; i < 10; i++)
    {
        scanf("%s", s[i]);
    }
    n = strlen(s[1]);
    k = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                for (k = 0; k < n; k++)
                    b[j][k] = s[j][k];
                for (k = 0; k < n; k++)
                    s[j][k] = s[j + 1][k];
                for (k = 0; k < n; k++)
                    s[j + 1][k] = b[j][k];
            }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", s[i]);
    }
    return 0;
}