#include <stdio.h>
#include <string.h>
#define SIZE 4

void insertion_sort(int a[], int n);
// void output_array(int arr[], int size);

int main()
{
        int arr[SIZE] = {0};
        int i, n, tmp, flag = 1;
        scanf("%d", &n);
        while (6174 != n)
        {
                tmp = 0;
                while (n >= 10) //用来把四位数分割成四个数并分别存入arr数组中
                {
                        arr[tmp++] = n % 10;
                        n /= 10;
                }
                arr[tmp] = n;
                insertion_sort(arr, SIZE); // arr数组已经调整为升序
                // output_array(arr, SIZE);
                if (flag)
                {
                        for (i = 0; i < 3; i++)
                        {
                                if (arr[i] == arr[i + 1])
                                {
                                        printf("Fail!\n");
                                        return 0;
                                }
                        }
                        flag = 0;
                }
                int a1 = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
                int a2 = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
                // printf("a1=%d a2=%d\n", a1, a2);
                n = a1 - a2;
        }
        printf("Succeed!\n");
        return 0;
}

void insertion_sort(int a[], int n)
{
        int k;
        for (k = 1; k < n; k++)
        {
                int key = a[k];
                int j = k - 1;
                while (j >= 0 && a[j] > key)
                {
                        a[j + 1] = a[j];
                        j--;
                }
                a[j + 1] = key;
        }
}
/* void output_array(int arr[], int size)
{
        int i;
        for (i = 0; i < size; i++)
                printf("%d\t", arr[i]);
        printf("\n");
} */
