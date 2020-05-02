#include <ctype.h>
#include <stdio.h>

int main()
{
    int va1 = 't';
    int va2 = '1';
    int va3 = ' ';
    if (isspace(va1))
    {
        printf("va1 = |%c| ÊÇ¿Õ°××Ö·û\n", va1);
    }
    else
    {
        printf("va1 = |%c| ²»ÊÇ¿Õ°××Ö·û\n", va1);
    }
    if (isspace(va2))
    {
        printf("va2 = |%c| ÊÇ¿Õ°××Ö·û\n", va2);
    }
    else
    {
        printf("va2 = |%c| ²»ÊÇ¿Õ°××Ö·û\n", va2);
    }
    if (isspace(va3))
    {
        printf("va3 = |%c| ÊÇ¿Õ°××Ö·û\n", va3);
    }
    else
    {
        printf("va3 = |%c| ²»ÊÇ¿Õ°××Ö·û\n", va3);
    }
    return 0;
}