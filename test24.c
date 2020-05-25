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
    { // ʹ��forѭ��������ά�����ʼ��
        for (j = 0; j < m; j++)
            scanf(" %d", &arr[i][j]);
        getchar();
    }

    //    output_binaryarray(arr,n,m);
    int arr01[N] = {0};
    int index; // index����������Ϊarr01��index
    for (i = 0, index = 0; i < n; i++, index++)
    {                  //��������
        int count = 0; // ÿ�м�����ɺ󣬽�count������Ϊ0�����ڼ�����һ�е�����
        for (j = 0; j < m; j++)
        { //��������
            if (prime(arr[i][j]))
            { // ��������������Ǿ����������������������Ҫ�ж����ж�
                printf("%d %d\n", i, j);
                count++;
            }
        }
        //        printf("arr01[%d]=%d\n", index, count);
        arr01[index] = count; // ���ǽ�ÿ�м�¼��������������arr01��
                              //        	      tmp��������֤ÿ�д�������ݶ�ռ��arr01�Ĳ�ͬλ��
    }

    // ���ú������Ƚ�arr01�����в�ͬ�м�¼������������˭����󣬾��������һ���󣬾Ͷ����.��Ȼcompare�������������Ƚϵ�
    compare(arr01, n); // n��������arr01�Ǽ�¼ÿ������ӵ�е�����������
    //	arr���±��ʾ����������
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
            return False; //n�ܱ�j��������������������False
        }
    }
    return True; //n������������True
}

// ���ú������Ƚ�arr01�����в�ͬ�м�¼������������˭����󣬾��������һ���󣬾Ͷ����.��Ȼcompare�������������Ƚϵ�
// ���룺n��������arr01�Ǽ�¼ÿ������ӵ�е�����������arr���±��ʾ����������
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
            printf("��%d��:��%d������\n", index[i], a[i]);
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
            { // ���������ҵ�һ��С��k����
                j--;
            }

            if (i < j)
            {
                arr[i] = arr[j];
                index[i++] = index[j];
            }

            while (i < j && arr[i] < k)
            { // ���������ҵ�һ�����ڵ���k����
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
        // �ݹ����
        QuickSort(arr, index, low, i - 1);  // ����k���
        QuickSort(arr, index, i + 1, high); // ����k�ұ�
    }
}
// ���룺n��������arr01�Ǽ�¼ÿ������ӵ�е���������
void output_array(int arr[], int size)
{
    int i;
    printf("һά���飺[");
    for (i = 0; i < size; i++)
        printf("%d,", arr[i]);
    printf("\b]\n");	// \b�������˸�Ѷ����˵��� 
}

void output_binaryarray(int arr[N][M], int n, int m)
{
    int i, j;
    printf("��ά���飺\n");
    for (i = 0; i < n; i++)
    {
        printf("[");
        for (j = 0; j < m; j++)
            printf("%d,", arr[i][j]);
        printf("\b]\n");
    }
}
