#include<stdio.h>
int main(){
  int n,a,c=0,d,i;
  scanf("%d", &n);
  a=n*n+1;
  for (i = a; i >1; i--) {
    if (a%i==0) {
      c=0;
      for (d = 2; d < i; d++) {
        if (i%d==0) {
          c+=1;
        }
      }
      if (c==0) {
        printf("%d\n", i);
        return 0;
      }
    }
  }
}