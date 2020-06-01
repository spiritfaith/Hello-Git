#include <stdio.h>
#include <math.h>

#define POW 1.0/3

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    double aver, pow1, pow2, pow3;
    pow1 = pow((double)x, POW);
    pow2 = pow((double)y, POW);
    pow3 = pow((double)z, POW);
    printf("%.2f\n", pow1*pow2*pow3);
    return 0;
}