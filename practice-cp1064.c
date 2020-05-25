#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LEN 1000
void freq_e(char *);

void freq_e(char *s) {
  //printf("%s\n", s);
  //exit(1);
  int counter[26];
  memset(counter, 0, sizeof(int) * 26);
  int start_flag = 1;
  while (*s) {
    char c = *s;
    if (isalpha(c)) c = tolower(c);
    if (c == 'e') {
      //printf("run\n");
      //exit(1);
      if (!start_flag && isalpha(*(s-1))) {
        counter[tolower(*(s-1))-'a']++;
        //printf("%c%c\n", *(s-1), c);
      }

      if (*(s+1) && isalpha(*(s+1))) {
        counter[tolower(*(s+1))-'a']++;
        //printf("%c%c\n", c, *(s+1));
      }

    }
    start_flag = 0;
    s++;
  }
  char sorted[26];
  int k;
  for (k=0; k<26; k++)
    sorted[k] = k + 'a';
  int j;
  // insertion sort
  for (k=1; k<26; k++)
    for (j=k; j>0; j--)
      if (counter[j]>counter[j-1]) {
        int x;
        x=counter[j], counter[j]=counter[j-1], counter[j-1]=x;
        char c;
				c=sorted[j], sorted[j]=sorted[j-1], sorted[j-1]=c;
      }
  if (!counter[0])
    printf("NONE");
  else {
    for (k=0; k<26; k++)
      if (counter[k])
        printf("%c %d\n", sorted[k], counter[k]);
      else break;
  }
}


int main() {
  char line[MAX_LEN + 1];
  // not working, as input contains whitespace
  //scanf("%s", line);
  gets(line);
  freq_e(line);
  return 0;
}
