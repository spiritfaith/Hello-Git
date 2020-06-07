#include <stdio.h>

#define SIZE 3

int main() {
    int a[SIZE][SIZE] = {0};
    int b[SIZE] = {0};
    int i, j;
    int sym = -1;
    int sum = 0;
    int ret;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            b[i] += a[i][j];
        }
    }
    for (i = 0; i < SIZE-1; i++) {
        ret = b[i]>b[i+1] ? i : i+1;
    }
    printf("%d\n", ret);
    return 0;
}