#include <stdio.h>

void get_num_apples() {
  int K, T;
  int n = -1;
  scanf("%d %d", &K, &T);
  // your code - start
	T /= K;
	n = 0;
	while (T) {
		n += 1;
		T >>= 1;
	}
  // your code - end
  printf("%d", n);

}

int main() {
  get_num_apples();
}