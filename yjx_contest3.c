#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

int get_depth(char *s) {
  int depth = 0, len_s = strlen(s);
  // your code - start
  int size = 0;
  int i = 0;
  for (i = 0; i < len_s; i++){
      if ('(' == s[i]){
          size++;
          depth = depth>size ? depth : size;
      }else if (')' == s[i]){
          size--;
      }
  }
  // your code - end
  printf("%d\n", depth);
}

int main() {
  char s[MAX_LEN + 1];
  gets(s);
  get_depth(s);
  return 0;
}
