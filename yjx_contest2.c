#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

void count_substring(char s[][MAX_LEN + 1], int n);
int check_match(char *a, char *b);
int buffer_filter(char s[][MAX_LEN], int m);

int buffer_filter(char s[][MAX_LEN], int m)
{
    
}

int check_match(char *a, char *b) {
    while (*b) {
        if (*a == '1' && *b == '0') return 0;
        if (*a == '0' && *b == '1') return 0;
        a++, b++;
    }
    return 1;
}

void count_substring(char s[][MAX_LEN + 1], int n) {
  int len_a = strlen(s[0]), len_b = strlen(s[1]);
  char buffer[50][MAX_LEN + 1];
  int number = 0;
  // your code - start
  int i, m = 0;
  for (i=0; i<=len_a-len-b; i++) {
      if (check_match(s[0]+i, s[1])) {
          int j;
          for (j=0; j<len_b; j++)
              buffer[m][j] = s[0][j];
            buffer[m++][len_b] = '\0';
      }
  }


  number = buffer_filter(buffer, m);
  // your code - end
  printf("%d\n", number);
}

int main() {
  char a_b[2][MAX_LEN + 1];
  int n = 0;
  gets(a_b[0]);
  gets(a_b[1]);

  count_substring(a_b, 2);
  return 0;
}
