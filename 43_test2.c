#include <stdio.h>
#include <string.h>

#define SIZE 100
int main() {
    char s[SIZE];
    scanf("%s", s);
    int i = 0;
    int len = strlen(s);
    for (i = len; i >= 0; i--) {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}