#include <stdio.h>

void merge(int a[], int low, int mid, int high);
void mergesort(int a[], int low, int high);
void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);
void insertion_sort(int a[], int n);
void bubble_sort(int a[], int n);
void pointer_size(void);

int b[8];

// feature: if sorted, then only one pass
void insertion_sort(int a[], int n)
{
  int k; // initial: k = 1
  // loop invariant: a[0 ... k - 1] is sorted.
  for (k = 1; k < n; k++)
  {
    int key = a[k];
    // Insert a[k] into the sorted sequence a[0 ... k - 1].
    int j = k - 1;
    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

void bubble_sort(int a[], int n)
{
  int i, j;
  // loop invariant:  a[n - i ... n - 1] are top i elements.
  for (i = 0; i < n - 1; i++)
    // bubble 'out' the max element among a[0 ... n - i - 1]
    // to position a[n - i - 1]
    for (j = 1; j < n - i; j++)
      if (a[j - 1] > a[j])
      {
        int t;
        t = a[j - 1], a[j - 1] = a[j], a[j] = t;
      }
}

void merge(int a[], int low, int mid, int high)
{
  // A: a[low ... mid] & B: a[mid + 1 ... high]
  int i = low, j = mid + 1;
  int k = 0;
  while (i <= mid && j <= high)
  {
    if (a[i] < a[j])
    {
      b[k] = a[i];
      i++;
    }
    else
    {
      b[k] = a[j];
      j++;
    }
    k++;
  }
  // i > mid or j > high
  if (i <= mid)
  {
    // A remaining elements
    while (i <= mid)
    {
      b[k] = a[i];
      k++, i++;
    }
  }
  else
  {
    // i > mid
    while (j <= high)
    {
      b[k] = a[j];
      k++, j++;
    }
  }
  // b: merged result
  // b[0 ... k - 1] >> a[low ... high]
  for (i = low, j = 0; i <= high; i++, j++)
    a[i] = b[j];
}

void mergesort(int a[], int low, int high)
{
  if (low == high)
    return;
  int mid = low + (high - low) / 2;
  mergesort(a, low, mid);
  mergesort(a, mid + 1, high);
  merge(a, low, mid, high);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
  int temp;
  temp = v[i], v[i] = v[j], v[j] = temp;
}

/* qsort: sort v[left, ..., right] into increasing order */
void qsort(int v[], int left, int right)
{
  int i, last;
  if (left >= right)                         /* do nothing if array contains */
    return;                                  /* fewer than two elements */
  swap(v, left + (right - left) / 2, right); // left + (right - left) / 2 = (left + right) / 2 = mid
                                             // a[mid] <> a[right]
  last = i = left;
  // loop invariant: v[left, ..., last - 1] < pivot
  // v[last, ..., i - 1] >= pivot
  for (; i < right; i++) /* partition */
    if (v[i] < v[right])
      swap(v, last++, i);
  swap(v, last, right);
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

void output_array(int a[], int n)
{
  int k;
  for (k = 0; k < n; k++)
    printf("%d ", a[k]);
  printf("\n");
}

void pointer_size(void)
{
  int *k;
  printf("%d", sizeof(k));
}

int main()
{
  // pointer_size();
  // return 0;
  int a[] = {
      5, 0, 4, 7, 1, 3, 2, 6};
  output_array(a, 8);
  // qsort(a, 0, 7);
  insertion_sort(a, 8);
  // bubble_sort(a, 8);
  output_array(a, 8);
  return 0;
}
