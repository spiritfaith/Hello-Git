#include <stdio.h>

#define SIZE 1000

int prime(int n)
{
    int i;
    if (1 == n)     // 1 is not only a even num but also a odd num 
        return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

int seperate_judge(int n)
{
    int a[4] = {0};
    int ind = n%10;
    int thou = n/1000;
    int hund = (n - thou*1000)/100;
    int ten = (n - thou*1000 - hund*100)/10;
    if (prime(ind + thou + hund + ten)) 
        return n;
    return 0;
}

int main()
{
    int i, j;
    int sum = 0;
    int tmp;
    // tmp = seperate_judge(996);
    for (i = 0; i < SIZE; i++)
    {
        tmp = seperate_judge(i);
        if (tmp != 0)           // tmp不等于0，说明和为素数，输出，且sum自增
        {
            printf("%d\t", i);
            sum++;
        }
    }
    printf("%d\n", sum);
    // printf("%d", tmp);
    return 0;
}