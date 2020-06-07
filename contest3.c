#include <stdio.h>
void count_common(void);

void count_common(void) {
  int A, B;
  scanf("%d %d", &A, &B);
  int counter = 0;
  // your code - start
  int i, j;
  int s[100];
  int t[100];
  if(A%2==1&&B%2==1&&A==B)
  {
      counter++;
  }
  if(A%2==0&&B%2==1)
  {
      while(A%2!=1)
      {
          A=A/2;
      }
      if(A==B){
      counter++;}
  }
  if(B%2==0&&A%2==1)
  {
      while(B%2!=1)
      {
          B=B/2;
      }
      if(A==B){
      counter++;}
  }
  if(A%2==0&&B%2==0&&A==B)
  {
      while(A%2!=1)
      {
          counter++;
          A=A/2;
      }
  }
  if(A%2==0&&B%2==0&&A!=B)
  {
      if(A%B==0)
      {
          while(A%2!=1)
        {
          counter++;
          A=A/2;
        }
        counter--;
      }
      if(B%A==0)
      {
          while(B%2!=1)
        {
          counter++;
          B=B/2;
        }
        counter--;
      }
      else
      {
          counter=0;
      }
      
  }
  // your code - end
  printf("%d\n", counter);
}

int main() {
  count_common();
  return 0;
}