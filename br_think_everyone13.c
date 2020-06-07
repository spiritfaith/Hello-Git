#include <stdio.h>
int main()
{
    int n, Sum_squares, squares_Sum, balance;
    printf("请输入一个序列最大的数字:\n");
    scanf("%d", &n);
    n -= 1;
    Sum_squares = (n * (n + 1) / 2) * (n * (n + 1) / 2);
    squares_Sum = n * (n + 1) * (2 * n + 1) / 6;
    balance = Sum_squares - squares_Sum;
    printf("%d以内和的平方是%d,平方和是%d,差为%d\n", n + 1, Sum_squares, squares_Sum, balance);
    return 0;
}