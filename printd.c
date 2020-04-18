#include <stdio.h>
/* 自己手动模拟printf函数 */
/* printd: print n in decimal */
void printd(int n);

void printd(int n)
{
        if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}

int main()
{
    int n;
    scanf("%d", &n);
    printd(n);
    return 0;
}