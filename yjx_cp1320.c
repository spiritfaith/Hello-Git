#include <stdio.h>
#include <math.h>

#define NUM 0.5
// a=(int)(r+0.5)
int main()
{
    double n = 2019;
    int a = (int)(sqrt(n)+0.5);
    printf("%d\n", a-6);
    return 0;
}