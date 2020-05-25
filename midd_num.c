#include <stdio.h>
#define SIZE 30

void insertion_sort(int a[], int n);
void output_array(int arr[], int size);

int main()
{   
    int a[SIZE] = {0};
    int i = 0;
    float midd_num;
    int tmp;
    do
    {
        scanf("%d", a + i);
        if (-100000 == *(a + i))
        {
            tmp = i; // i表示数组a可以引用的最后一个index
            break;   // i + 1相当于我们知道了输入数据的个数
        }
        i++;
    } while (1);
    /* printf("%d\n", tmp);
        exit(1); */
    // 将-100000置为0，再进行排序
    /* printf("%d\n", tmp);
        exit(1); */
    a[tmp] = 0;
    insertion_sort(a, 3);
    /* output_array(a, SIZE);
        exit(1); */
    // int commence = SIZE - tmp;// 起点从SIZE-tmp开始，当然这么设置是默认了输入为正整数
    int midd_index = tmp / 2;
    /* printf("%d\n", midd_index);
        exit(1); */
    if (tmp % 2 == 1) // 奇数情况
    {
        midd_num = (float)a[midd_index];
        printf("%.1f", midd_num);
    }
    else
    {
        midd_num = ((float)a[midd_index] + (float)a[midd_index + 1]) / 2; // cast
        printf("%.1f", midd_num);
    }
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

void output_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}