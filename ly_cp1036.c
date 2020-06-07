#include <stdio.h>

int Imprime(int n);

int main()
{
  int s[20];
  int i = 0, tmp;
  do
  {
    scanf("%d", &tmp);
    if (-1 == tmp)
      break;
    if (Imprime(tmp))
    {
      s[i] = tmp;
      i++;
    }
  } while (1);
  if (tmp == 0)
  {
    printf("%d\n", -1);
    return 0;
  }
  int m, max = -1;
  for (int j = 0; j < i; j++)
  {
    m = s[j];
    max = max > m ? max : m;
  }
  printf("%d\n", max);
  return 0;
}

int Imprime(int n)
{
  int i;
  for (i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}