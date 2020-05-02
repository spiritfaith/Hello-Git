#include <stdio.h>
#include <math.h>
#define N 100

void PrintPrime(int a[], int n);
void SiftPrime(int a[], int n);

int main()
{
    int a[N + 1];
    SiftPrime(a, N);
    PrintPrime(a, N);
    return 0;
}

void PrintPrime(int a[], int n)
{
    int i;
    for (i = 2; i <= N; i++)
    {
        if (a[i] != 0)
        {
            printf("%d\t", a[i]);
        }
    }
    printf("\n");
}

void SiftPrime(int a[], int n)
{
    int i, j;
    for (i = 2; i <= N; i++)
    {
        a[i] = i;
    }
    for (i = 2; i <= sqrt(N); i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            if (a[i] != 0 && a[j] != 0 && a[j] % a[i] == 0)
            {
                a[j] = 0;
            }
        }
    }
}