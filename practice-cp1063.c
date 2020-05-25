#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_string(char s[][100], int n) {
  int k;
  int *len = (int *)malloc(sizeof(int) * n);
  for (k=0; k<n; k++)
    len[k] = strlen(s[k]);

  char **sorted = (char **)malloc(sizeof(char *) * n);
  for (k=0; k<n; k++)
    sorted[k] = s[k];
  //for (k=0; k<n; k++)
  //  printf("%s\n", sorted[k]);
  //printf("*******************\n");
  //exit(1);
  int j;
  for (k=1; k<n; k++)
    for (j=k; j>0; j--)
      if (len[j]<len[j-1]) {
        int t;
        t=len[j], len[j]=len[j-1], len[j-1]=t;
        char *x;
        x=sorted[j], sorted[j]=sorted[j-1], sorted[j-1]=x;
      }
  for (k=0; k<n; k++)
    printf("%s\n", sorted[k]);
}

int main() {
  //char s[20][31];
  char s[20][100];
  int n=0;
  while (gets(s[n])) {
  	//printf("%s\n", s[n]);
    if (s[n][0] == '#')
      break;
    n++;
  }
  //printf("n: %d\n", n);
  //exit(1);

  sort_string(s, n);
}
