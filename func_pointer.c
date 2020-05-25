#include <stdio.h>
#define SIZE 4
void SelectionSort(int a[], int n, int (*compare)(int, int));
void output_array(int arr[], int size);
int Ascending(int a, int b);
int Descending(int a, int b);
void Swap(int *a, int *b);

void SelectionSort(int a[], int n, int (*compare)(int, int))
{
        int i, j, k;
        for (i = 0; i < n - 1; i++)
        {
                k = i;
                for (j = i + 1; j < n; j++)
                {
                        if ((*compare)(a[j], a[k])) k = j;
                }
                if (k != i)
                {
                        Swap(&a[k], &a[i]);
                }
        }
}

int Ascending(int a, int b)
{
        return a < b; //为真，则升序
}

int Descending(int a, int b)
{
        return a > b; //为假，则降序
}

void main()
{
        int arr[SIZE] = { 0 };
        int i, n;
        scanf("%d", &n);
        int index = 0;
        while (n > 10)  // 将输入的四位数n拆分成四个个位数并存入数组arr
        {
                arr[index++] = n % 10;
                n /= 10;
        }
        arr[index] = n;
        SelectionSort(arr, SIZE, Ascending);
        output_array(arr, SIZE);
}

void output_array(int arr[], int size)
{
        int i;
        for (i = 0; i < size; i++)
        {
                printf("%d\t", arr[i]);
        }
        printf("\n");
}

void Swap(int *a, int *b)
{
        int *tmp;
        tmp = a;
        a = b;
        b = tmp;
}