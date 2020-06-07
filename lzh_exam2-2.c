#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

void count_substring(char s[][MAX_LEN + 1], int n);

void count_substring(char s[][MAX_LEN + 1], int n)
{
    int len_a = strlen(s[0]), len_b = strlen(s[1]);
    char buffer[50][MAX_LEN + 1];
    memset(buffer, 0, sizeof(buffer));
    int number = 0;
    // your code - start
    int i, j, flag, x = 0;
    for (i = 0; i <= len_a - len_b; i++)
    {
        flag = 1;
        for (int j = i, k = 0; k < len_b; j++, k++)
        {
            if (s[1][k] == '?')
                continue;
            else if (s[0][j] == s[1][k])
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            int tmp = i;
            for (int k = 0; k < len_b; k++, tmp++)
            {
                buffer[x][k] = s[0][tmp];
            }
            x++;
        }
    }
    for (int i = 0; i <= x; i++)
        for (int j = i + 1; j <= x; j++)
        {
            if (strcmp(buffer[i], buffer[j]) == 0 && buffer[i][0] != 0)
                memset(buffer[j], 0, sizeof(buffer[j]));
        }
    for (int i = 0; i <= MAX_LEN; i++)
        if (buffer[i][0] != 0)
            number++;
    printf("%d\n", number);
}

int main()
{
    char a_b[2][MAX_LEN + 1];
    int n = 0;
    gets(a_b[0]);
    gets(a_b[1]);
    count_substring(a_b, 2);
    return 0;
}