#include <stdio.h>

#define SIZE 500
int main()
{
    char str[SIZE+1];
    int i;
    for (i = 0; i < SIZE; i++)
        str[i] = -1;
    gets(str);
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if('1' == str[i])
            count++;
    }
    // printf("i=%d\n", i);
    float ret;
    ret = (float)count / i;
    printf("0: %%%.2f\n1: %%%.2f\n", (1-ret)*100, ret*100);
    return 0;
}