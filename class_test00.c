#include <stdio.h>

void freq_char(void);

void freq_char(void)
{
  int freq[26];
  int k;
  memset(freq, 0, sizeof(int) * 26);
  char c, x = ' ';
  while ((c = getchar()) != EOF && c != '\n')
  {
    if (c == ' ' && x != ' ')
      freq[x - 'a']++;
    x = c;
  }
  if (x != ' ')
    freq[x - 'a']++;

  // your code - start
  
  printf("%c: %3d\n");
  // your code - end
}

int main()
{
  freq_char();
  return 0;
}