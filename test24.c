#include <math.h>
#define True 1
#define False 0
#define M 10
#define N 10

int prime(int n);
void compare(int a[], int size);
void QuickSort(int *arr, int *index, int low, int high);
void output_array(int arr[], int size);
void output_binaryarray(int arr[N][M], int n, int m);

int main()
{
    int n, m;
    int arr[N][M] = {0};
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    { // 使用for循环来给二维数组初始化
        for (j = 0; j < m; j++)
            scanf(" %d", &arr[i][j]);
        getchar();
    }

    //    output_binaryarray(arr,n,m);
    int arr01[N] = {0};
    int index; // index变量用来作为arr01的index
    for (i = 0, index = 0; i < n; i++, index++)
    {                  //控制行数
        int count = 0; // 每行计数完成后，将count重新置为0，便于计数下一行的素数
        for (j = 0; j < m; j++)
        { //控制列数
            if (prime(arr[i][j]))
            { // 如果是素数，我们就输出它的行数和列数还需要判断哪行多
                printf("%d %d\n", i, j);
                count++;
            }
        }
        //        printf("arr01[%d]=%d\n", index, count);
        arr01[index] = count; // 我们将每行记录的素数个数存入arr01中
                              //        	      tmp自增来保证每行存入的数据都占有arr01的不同位置
    }

    // 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然compare函数还是拿来比较的
    compare(arr01, n); // n是行数，arr01是记录每行素数拥有的素数个数，
    //	arr的下标表示素数所在行
    return 0;
}

int prime(int n)
{
    long k;
    k = sqrt((double)n) + 1;
    int j;
    for (j = 2; j < k; j++)
    {
        if (n % j == 0)
        {
            return False; //n能被j整除，不是素数，返回False
        }
    }
    return True; //n是素数，返回True
}

// 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然compare函数还是拿来比较的
// 传入：n是行数，arr01是记录每行素数拥有的素数个数，arr的下标表示素数所在行
void compare(int a[], int size)
{
    int i, index[N] = {0};
    for (i = 0; i < size; i++)
        index[i] = i;
    QuickSort(a, index, 0, size - 1);
    output_array(index, size);
    output_array(a, size);
    for (i = size - 1; i < size; i--)
        if (a[size - 1] == a[i])
        {
            printf("第%d行:共%d个素数\n", index[i], a[i]);
        }
        else if (a[size - 1] > a[i])
            break;
}

void QuickSort(int *arr, int *index, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        int l = index[low];
        while (i < j)
        {
            while (i < j && arr[j] >= k)
            { // 从右向左找第一个小于k的数
                j--;
            }

            if (i < j)
            {
                arr[i] = arr[j];
                index[i++] = index[j];
            }

            while (i < j && arr[i] < k)
            { // 从左向右找第一个大于等于k的数
                i++;
            }

            if (i < j)
            {
                arr[j] = arr[i];
                index[j--] = index[i];
            }
        }

        arr[i] = k;
        index[i] = l;
        // 递归调用
        QuickSort(arr, index, low, i - 1);  // 排序k左边
        QuickSort(arr, index, i + 1, high); // 排序k右边
    }
}
// 传入：n是行数，arr01是记录每行素数拥有的素数个数
void output_array(int arr[], int size)
{
    int i;
    printf("一维数组：[");
    for (i = 0; i < size; i++)
        printf("%d,", arr[i]);
    printf("\b]\n");	// \b是用来退格把逗号退掉的 
}

void output_binaryarray(int arr[N][M], int n, int m)
{
    int i, j;
    printf("二维数组：\n");
    for (i = 0; i < n; i++)
    {
        printf("[");
        for (j = 0; j < m; j++)
            printf("%d,", arr[i][j]);
        printf("\b]\n");
    }
}
