#include <stdio.h>

#define SIZE 90

int main()
{
    char c;
    int flag = 0;
    while ((c = getchar()) != '\n')
    {
        if ('k' == c)   
            flag = -100;
        if (flag != -100)
        {
            printf("%c", c);
        }
        flag = 0;
    }
    return 0;
}