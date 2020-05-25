#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float s[n];
    float a[n];
    int i;
    do
    {
        i = 0;
        scanf("%f", &s[i]);
        scanf("%f", &a[i]);
        i++;
        if (s[i - 1] == '\0')
            break;
    } while (1);
    int j;
    float sum;
    sum = 0;
    for (j = 0; j < i - 1; j++)
    {
        sum = sum + s[j] * a[j];
    }
    printf("%.2f", sum);
    return 0;
}