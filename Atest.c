#include <stdio.h>
#include <math.h>
void get_num_apples() {
  int K, T;
  int n = -1;
  scanf("%d %d", &K, &T);
  // your code - start
  int i = 0;
  long sum = T/K;
  while (sum){
    sum = sum - pow((double)2, (double)i);
    i++;
  }
  n = i;
//   printf("Returns: ");
  // your code - end
  printf("%d", n);

}

int main() {
  get_num_apples();
}