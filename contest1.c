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
    for (i = 0, j=0; i < n; i++, j++)
    {
        // int count = 0;
        if (s[i][j]=='0') s[i][j] = 'o';
        if (s[i][j]=='l') s[i][j] = '1';
        if (s[i][j]=='I') s[i][j] = '1';
        
        if(strcmp(s[i], s[i+1]) == 0)
        {
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