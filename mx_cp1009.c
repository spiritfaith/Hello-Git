#include<stdio.h>
int main(){
  int n,a,c=0,d,i;
  scanf("%d", &n);
  a=n*n+1;
  for (i = a; i >1; i--) {
    if (a%i==0) {       // 条件成立说明a有因子
      c=0;
      for (d = 2; d <= i/2; d++) {     // 循环判断素数
        if (i%d==0) {// i=35, d=2
          c+=1;
        }
      }
      if (c==0) {       // a有因子，那么当前这个因子一定最大
        printf("%d\n", i);
        return 0;
      }
    }
  }
}