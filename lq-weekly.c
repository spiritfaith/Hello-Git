#include <stdio.h>

int count(int a, int b);

int count(int a, int b)
{
    int count01 = 0;
    int i, j;
    int tmp;
    int arr[200] = {0};
    int sum = 0;
    for (i=a+1,j=0; i < b; i++, j++) // 遍历a和b之间的数     1
    {
        int c = i;
        while (1)
        {
            if (1 == c)
            {
                arr[j] = count01;
                break;
            }
            count01++;
            if (c % 2) // odd situation
            {
                c = 3 * i + 1;
            }
            else // even
            {
                c = i / 2;
            }
        }
    }
    for (i = 0; i < b-a; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int a, b;
    int n;
    scanf("%d %d", &a, &b);
    n = count(a, b);
    printf("%d %d %d", a, b, n);
    return 0;
}