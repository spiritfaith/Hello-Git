#include <stdio.h>

void process_shift(void)
{
  char s[1001];
  scanf("%s", s);
  int n;
  scanf("%d", &n);
  int a[100];
  int k;
  k = 0;
  while (s[k] != '\0')
    k++;

  int len = k;
  for (k = 0; k < n; k++)
    scanf("%d", &a[k]);
  // your code - start
  // your code - end

  printf("%s", s);
}

int main()
{
  process_shift();
  return 0;
}