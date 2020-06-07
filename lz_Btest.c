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
  if (strlen(s) == strlen(t)+1) {
		char *p = s, *q = t;
		int k = 1;
		while (*p) {
			if (*p == *q) {
				p++, q++;
			} else if (k == 1) {
				p++, k--;
			} else {
				flag = false;
				break;
			}
		}
	} else flag = false;
  // your code - end
  if (flag)
    printf("%s", "Possible");
  else printf("%s", "Impossible");
}

int main() {
  check_convertable();
}