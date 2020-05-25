#include<stdio.h>

void output_array(int arr[], int size);

int main(){
  int n[20];
  int i=0,j,a,k,buf;
  float b;
  while(1){
    scanf("%d", &a);
    if (a==-100000) {
      break;
      /* code */
    }
    n[i]=a;         // 以a作为中间变量的好处就是可以不将-100000存入数组
    i+=1;
  }
  // bubble sort
  for (j = 0; j < i-1; j++) {       // 外层循环来改变每次需要和后面比较的数字
    for (k = 0; k < (i-1) - j; k++) {   // 内层循环来使当前使用的数字和后面的数字进行比较，并进行换位
      if (n[k]<n[k+1]) {
        buf=n[k];
        n[k]=n[k+1];
        n[k+1]=buf;
        /* code */
      }/* code */
    }
    /* code */
  }
  output_array(n, 20);
  if (i%2==0) {                 // 偶数情况
    b=(n[i/2]+n[i/2-1])*1.0/2;  // 巧妙通过乘1.0来实现cast

    /* code */
  }
  else{
    b=n[i/2];

  }
  printf("%.1f\n", b);
  return 0;
}

void output_array(int arr[], int size)
{
        int i;
        for (i = 0; i < size; i++)
                printf("%d\t", arr[i]);
        printf("\n");
}