#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int i = strlen(str);
    printf("%c", str[i-1]);
    return 0;
}