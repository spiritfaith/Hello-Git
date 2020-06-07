#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
char s[MAX_LEN + 1];
char t[MAX_LEN + 1];
enum bool {
  false, true
};
typedef enum bool Bool;
void check_convertable() {
  scanf("%s %s", s, t);
  Bool flag = true;
  // your code - start
  int tmp = 0, tmp2 = 0;
  int i = 0;
  tmp = strcmp(s, t);
  if (strcmp(s, t) == 0){
    flag = false;
  }
  else{
    while (1){
      if (s[i] != t[i])
        break;
      i++;
    }
    tmp = i;
    // s删掉当前字符
    while (1){
      if (s[i] == '\0' || t[i] == '\0')
        break;
      if (s[i+1] != t[i]){
        flag = false;
        break;
      }
      i++;
    }
    
  }
  // your code - end
  if (flag)
    printf("%s", "Possible");
  else printf("%s", "Impossible");
}

int main() {
  check_convertable();
}