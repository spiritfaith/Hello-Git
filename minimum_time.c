#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

void bubble_sort(int a[], int n);

void bubble_sort(int a[], int n)
{
  int i, j;
  // loop invariant:  a[n - i ... n - 1] are top i elements.
  for (i = 0; i < n - 1; i++)
    // bubble 'out' the max element among a[0 ... n - i - 1]
    // to position a[n - i - 1]
    for (j = 1; j < n - i; j++)
      if (a[j - 1] > a[j])
      {
        int t;
        t = a[j - 1], a[j - 1] = a[j], a[j] = t;
      }
}

int main()
{
    float a[SIZE] = {0};
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    bubble_sort(a, n);
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i] * (n - i)*1.0;
    }
    printf("%f", sum);
    return 0;
}