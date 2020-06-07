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

int main()
{
    int i, j;
    int sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (i <= j && prime(i + j))
            {
                
                sum++;
            }
        }
    }
}