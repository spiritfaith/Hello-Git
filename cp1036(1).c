#include<stdio.h>
int Imprime(int n);
int main()
{
  int s[20];
  int i=0;
  do
    {
        scanf("%d",&s[i]);
        i++;
        if(s[i-1]==-1)
        break;
    }while(1);
  int m,max=0;
    for(int j=0;j<i-1;j++)
    {
        m=s[j];
        if(Imprime(m)==1&&m>max)
        {
            max=m;
        }
        else
        {
          printf("-1");
        }
        
    }
  printf("%d\n",max);
  return 0;
}
int Imprime(int n)
{
   int i;
  for(i=2;i<=n/2;i++)
  {
      if(n%i==0)
        return 0;
  }
  return 1;
}