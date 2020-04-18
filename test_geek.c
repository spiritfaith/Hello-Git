#include<stdio.h>

int main()
{
    /* struct point01{
        char a;
        char b;
        int c;
    }; */
    struct point02
    {
        char a;
        int b;
        char c;
    };
    printf("%d\n", sizeof(struct point02));
    return 0;
}