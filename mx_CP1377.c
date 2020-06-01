#include<stdio.h>
int main(){
  int a[10000000];
  int n,i,buf,c,j,temp;
  scanf("%d", &n);
  a[0]=1;
  c=1;
  for (i = 2; i <=n; i++) {
    buf=0;
    for (j = 0; j<c; j++) {
      temp=a[j]*i+buf;
      a[j]=temp%10;
      buf=temp/10;
    }
    while(buf){
      c+=1;
      a[c-1]=buf%10;
      buf=buf/10;
    }
  }
  for (j = c-1; j>=0; j--) {
    printf("%d", a[j]);
  }
  return 0;
}