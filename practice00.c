#include <stdio.h>
#include <string.h>

int smaller(char *s, char *t){
    if (strcmp(s, t) < 1)
        return 1;
    else
        return 0;
}

int main()
{
    char *a, *b;
    *a = 5;
    *b = 6;
    int c;
    c = smaller(a, b);
    return 0;
}