#include <stdio.h>

#define SIZE 3
int main()
{
    int n, i = 0, j = 0;
    int tmp_l = 0, tmp_s = 0;
    scanf("%d", &n);
    int a[SIZE];
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < SIZE; i++)
        {
            scanf("%d", a + i);
            tmp_l = tmp_l>a[i] ? tmp_l : i;
            // tmp_s = tmp_s<a[i] ? tmp_s : i;
        } 
        if (tmp_l == 2) {
            if (a[0]+a[1] > a[2] && a[0]*a[0]+a[1]*a[1] == a[2]*a[2]) {
                printf("Yes");
            }
            else {
                printf("No");
            }
        }
        else if (tmp_l == 1) {
            if (a[0]+a[2] > a[1] && a[0]*a[0]+a[2]*a[2] == a[1]*a[1]) {
                printf("Yes");
            }
            else {
                printf("No");
            }
        }
        else if (tmp_l == 0) {
            if (a[1]+a[2] > a[0] && a[1]*a[1]+a[2]*a[2] == a[0]*a[0]) {
                printf("Yes");
            }
            else {
                printf("No");
            }
        }
        printf("\n");
    }
    return 0;
}