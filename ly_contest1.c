#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define N 50

void check_similar(char s[][MAX_LEN + 1], int n);

void check_similar(char s[][MAX_LEN + 1], int n) {
  char *messages[] = {
    "Similar handles found",
    "Similar handles not found",
  };
  int flag = 1;
  // your code - start
  // hint: use strcmp to check whether two strings
  int i;
  char *s1;
  char *s2;
  int ch,num = 0;
  for(i=0;i<n;i++)
  {
    s1 = s[i];
    s2 = s[i+1];
    if(strlen(s1)==strlen(s2)){
    ch = strcmp(s1,s2);
    if(ch == 24||ch==35||ch==31)
    {
        num++;
    }
    }
  }
  if(num!=0)
  {
      flag++;
  }
  // are equal
  // your code - end
  printf("%s\n", messages[flag]);
}

int main() {
  char accounts[N][MAX_LEN + 1];
  int n = 0;
  while (gets(accounts[n])!=NULL) {
    n++;
  }
  check_similar(accounts, n);
  return 0;
}