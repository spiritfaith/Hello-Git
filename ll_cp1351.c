#include <stdio.h>
#define N 31
int main()
{
    int i;
    int m = 0;
    int k = 0;
    int a[N];
    int sum = 0;
    
    while (m != -1)
    {
        scanf("%d", &m);
        a[k] = m;
        k = k + 1;
        sum = sum + 1;
    }
    /* printf("%d\n", k);// k=4, sum=4
    exit(1); */
    if ((sum - 1)% 2 == 0) //
    {
        for (i = 0; i < k - 1; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    else
    {
        a[(k - 1) / 2] = 0; // k=4
        for (i = 0; a[i] != -1; i++)
        {
            if(0 == a[i])
                i++;
            printf("%d\n", a[i]);
        }
    }
    return 0;
}