#include <stdio.h>

int binary_search_first(long num[], long x, int n) {
  int low = 0, high = n - 1;
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (x <= num[mid]) high = mid;
    else low = mid + 1;
  }
  return num[low] == x ? low : -1;
}

int binary_search_last(long num[], long x, int n) {
  int low = 0, high = n - 1;
  while (low < high) {
    int mid = low + (high - low) / 2; // mid = floor of (low + high) / 2
    mid = (high - mid) + low; // mid = ceiling of (low + high) / 2
    if (x < num[mid]) high = mid - 1;
    else low = mid; // extreme case: low = high - 1, only 2 positions
  }
  return num[low] == x ? low : - 1;
}

int main() {
  long num[] = {
    10, 22, 46, 55, 55, 55, 60, 60, 70, 88, 89, 90, 99
  };

  int index = binary_search_last(num, 55, 13);
  if (index == -1)
    printf("not found\n");
  else printf("num[%d] = %d\n", index, num[index]);
}
