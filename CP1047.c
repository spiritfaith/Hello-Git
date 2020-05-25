#include <stdio.h>
#define SIZE 50
int palindromic_number(int n, int a[]);
int palindromic_number(int n, int a[]){
    int i;
    int j, k;
    int tmp = 0;
    for (i = 0; a[i] != -100; i++) a[i] = -100;
    if ((10 > n) && (0 <= n)) return 1;
    for (i = 0; n != 0; i++){
        a[i] = n % 10;
        n /= 10;
    }
    // printf("i=%d\n", i);
    for (j = 0, k = i - 1; (j != k) && (j < k); j++, k--){
        if (a[k] != a[j])
            tmp++;
    }
    if (0 == tmp) return 1;
    else return 0;
}

int main()
{
    int n, i;
    int count = 0;
    int a[SIZE] = {0};
    for (i = 0; i < SIZE; i++) a[i] = -100;
    for (i = 0;; i++){
        scanf("%d", &n);
        if (-1 == n) break;
        if (palindromic_number(n, a)) count++;
    }
    printf("%d\n", count);
    return 0;
}