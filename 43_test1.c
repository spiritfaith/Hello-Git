#include <stdio.h>

#define SIZE 30
int main() {
    int a[SIZE];
    int i = 0, tmp = -100;
    float aver = 0;
    while (tmp != -1) {
        scanf("%d", &tmp);
        if (-1 != tmp) {
            a[i] = tmp;
            i++;
        }
    }
    tmp = i;    // tmp is lenth.
    for (i = 0; i < tmp; i++) {
        aver += a[i];
    }
    aver /= tmp*1.0;
    int counter = 0;
    for (i = 0; i < tmp; i++) {
        if (a[i] > aver) {
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}