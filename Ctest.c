#include <stdio.h>
#define SIZE 500
void count_common(void);

void count_common(void) {
  int A, B;
  scanf("%d %d", &A, &B);
  int counter = 0;
  // your code - start
  int i, j, len_s, len_l, tmp1 = -100;
  if (A>B)
    tmp1 = 100;
  int a[SIZE], b[SIZE];
  if (A%2 || B%2){      // 其中有一个是奇数，counter = 0;
    counter = 0;
  }
  else{
    a[0] = A, b[0] = B;
    for (i=0, j=0; A!=0 && B!=0;){
      A /= 2;
      B /= 2;
      if (A != 0 && B != 0)
        j++;
      i++;
      a[i] = A;
      b[i] = B;
      if (A == 1 || B == 1)
        continue;
      else if ((A%2==1) || (B%2==1))
        break;
    }
    len_l = i+1;  // len_l 就是最长数组拆分后的长度
    len_s = j+1;
    // printf("i=%d,j=%d\n", i, j);
    if (tmp1 == 100) // A>B
    {
      for (i = 0; i < len_l; i++){  // 
        for (j = 0; j < len_s; j++){
          if (a[i] == b[j])
            counter++;
        }
      }
    }
    else{  // A<B
      for (i = 0; i < len_l; i++){
        for (j = 0; j < len_s; j++){
          if (b[i] == a[j])
            counter++;
        }
      }
    }
  }
  
  // your code - end
  printf("%d\n", counter);
}

int main() {
  count_common();
  return 0;
}