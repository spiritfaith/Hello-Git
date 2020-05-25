#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define N 50

void check_similar(char s[][MAX_LEN + 1], int n);

void check_similar(char s[][MAX_LEN + 1], int n)
{
    char *messages[] = {
        "Similar handles found",
        "Similar handles not found",
    };
    int flag = 1;
    // your code - start
    // hint: use strcmp to check whether two strings
    // are equal
    int i, j;
    for (i = 0; i < n; i++) // n=2,两个字符串
    {
        for (j = 0; s[i][j] != '\0'; j++)
        { // 预处理，按照题目要求进行字符替换
            if (s[i][j] == '0')
                s[i][j] = 'O';
            if (s[i][j] == 'l')
                s[i][j] = '1';
            if (s[i][j] == 'I')
                s[i][j] = '1';
        }

        /* else if (strcmp(s[i], s[i+1]) < 0 && (i+1) < n)
        {

        } */
    }
    for (i = 0; i < n; i++) // 遍历每个字符串
    {
        if (strcmp(s[i], s[i + 1]) == 0 && (i + 1) < n)
        { // 如果字符串相同，break！
            flag = 0;
            break;
        }
    }
    // your code - end
    printf("%s\n", messages[flag]);
}

int main()
{
    char accounts[N][MAX_LEN + 1];
    int n = 0;
    while (gets(accounts[n]) != NULL)
    {
        n++;
    }
    check_similar(accounts, n);
    return 0;
}