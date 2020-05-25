#include <stdio.h>

int func(int a, int b, int count1);

int func(int a, int b, int count1)
{
    if (a==b)     // 递归出口
    {
        return count1;
    }
    int n = 0;
    n = a;
    int count2 = 0;
    while (1)
    {
        if (1 == n)
        {
            count2++;
            break;
        }
        if (0 == n % 2) // even num
        {
            n /= 2;
            count2++;
        }
        else
        {
            n = n * 3 + 1;
            count2++;
        }
    }
    count1 = count1>count2 ? count1 : count2;
    ++a;
    func(a, b, count1);
}

int main()
{
    int a, b;
    int i = 0;
    int count1 = 0;
    int n;
    scanf("%d %d", &a, &b);
    n = func (a+1, b, count1);
    printf("%d %d %d", a, b, n);
    return 0;
}