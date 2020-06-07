#include <stdio.h>
#include <string.h>

#define SIZE 100
int main() {
    char s[SIZE];
    int c,i=0;
    while ((c = getchar()) != '\n') {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            s[i] = c;
            i++;
        }
    }
    int tmp = i;
    for (i = tmp-1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}