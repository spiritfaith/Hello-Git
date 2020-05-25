#include <stdio.h>
#include <string.h>

#define SIZE2 80
#define SIZE1 10

void Sort(char str[][SIZE2]);

void Sort(char str[][SIZE2])
{
    int i, j;
    char tmp[SIZE2];
    for (i = 0; i < SIZE1-1; i++)
    {
        for (j = i+1; j < SIZE1; j++)
        {
            if (strcmp(str[j], str[i]) < 0)
            {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
}

int main()
{
    char s[SIZE1][SIZE2];
    int i = 0, j;
    for (i = 0; i < SIZE1; i++)
        gets(s[i]);
    Sort(s);
    for (i = 0; i < SIZE1; i++)
        puts(s[i]);
    return 0;
}