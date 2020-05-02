#include <stdio.h>

double f(double a);
double f1(double c);

int main()
{
    double x1, x0, tmp = 0; // x0是最终需要求解的根，x1是不断迭代得到的根
    scanf("%lf", &x1);      // tmp用来控制循环
    do
    {
        x0 = x1;
        x1 = x0 - f(x0) / f1(x0);
    } while (x0 - x1 >= tmp);
    printf("%.2lf", x0);
    return 0;
}

double f(double a) // f是本题的函数
{
    double b;
    b = (2 * a * a * a) - (3 * a * a) + (3 * a) - 6;
    return b;
}

double f1(double c) // f1是fx的一阶导数
{
    double d;
    d = 6 * c * c - 6 * c + 3;
    return d;
}