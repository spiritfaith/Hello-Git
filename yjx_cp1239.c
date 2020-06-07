#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void backwards(char *s, int n, char *c)
{
    char *p = s;
    int i;
    for (i = 0; i < n; i++)
    {
        c[i] = *(p + n - 1 - i);
    }
}


int main()
{
    char s[SIZE+1];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
        ;
    // i is lenth of char-array s.
    char c[SIZE];
    strcpy(c, s);
    backwards(s, i, c);
    printf("Enter string:");
    printf("a=%s\n", c);
    return 0;
}