#include <stdio.h>
void count_common(void);

void count_common(void) {
  int A, B;
  scanf("%d %d", &A, &B);
  int counter = 0;
  // your code - start
  while (!(A&1) && !(B&1)) {    // 奇数和1做逻辑与运算，结果为真；偶数则为假。
    if (A == B) {
        counter++;
				A >>= 1, B >>= 1;
		} else if (A > B) {
			A >>= 1;
		} else B >>= 1;
  }
  if (A == B) counter++;
  // your code - end
  printf("%d\n", counter);
}

int main() {
  count_common();
  return 0;
}