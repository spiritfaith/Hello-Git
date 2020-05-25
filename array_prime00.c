#include <stdio.h>
#include <math.h>
#define True 1
#define False 0
#define M 10
#define N 10

int prime(int n);
void compare(int a[],int arr[][M], int n,int m);
void QuickSort(int *arr,int *index, int low, int high);
void output_array(int arr[],int size);
void output_biaryarray(int arr[N][M],int n,int m);

int main()
{
    int n, m;
    int arr[N][M] = {0};
    int i,j;
    
    scanf("%d %d", &n, &m);     // 输入一个二维数组的行和列
	
    for(i=0;i<n;i++){           //初始化二维数组
    	for(j=0;j<m;j++)
        	scanf(" %d", &arr[i][j]);
        getchar();	
	}
    	
    	
    /* output_biaryarray(arr,n,m);
    exit(1); */
    int arr01[N] = {0};
    int index; // index变量用来作为arr01的index
    for (i = 0,index=0; i < n; i++,index++) //控制行数
    {
    	int count = 0; // 每行计数完成后，将count重新置为0，便于计数下一行的素数
        for (j = 0; j < m; j++) //控制列数
        {
            if (prime(arr[i][j])) // 如果是素数，我们就输出它的行数和列数还需要判断哪行多
            {
//                printf("%d %d\n", i, j);
                count++;
            }
        }
        // printf("arr01[%d]=%d\n",index,count);
        arr01[index] = count; // 我们将每行记录的素数个数存入arr01中
        	     // tmp自增来保证每行存入的数据都占有arr01的不同位置
    }

    // 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然z函数还是拿来比较的
    compare(arr01, arr, n, m);
    return 0;
}

int prime(int n)
{
	long k;
	k = sqrt((double)n) + 1;
	int j;
	for (j = 2; j < k; j++)
	{
		if (n%j == 0)
		{
			return False;  //n能被j整除，不是素数，返回False
		}
	}
	return True;  //n是素数，返回True
}

// 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然z函数还是拿来比较的          
void compare(int a[],int arr[][M], int n,int m){
	int i,index[N]={0};
	for(i=0;i<n;i++)
		index[i]=i;
	QuickSort(a,index,0,n-1);
	/* output_array(index,n);
	output_array(a,n); */
	//找到满足最多素数的行，并输出该行素数所在列号 
	for(i=n-1;i<n;i--)
    {
        if (a[n - 1] == 0)      // 没有一行有素数的情况
        {
            printf("NONE");
            break;
        }
		else if(a[n-1]==a[i]){          // 至少有一行有最多素数的情况
			printf("%d ",index[i]+1);
			int j;
			for(j=0;j<m;j++)
				if (prime(arr[index[i]][j]))//判断是否为素数 
					printf("%d ",j+1);
			printf("\n");
		}else if(a[n-1]>a[i])
			break;
    }
}

void QuickSort(int *arr,int *index, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        int l = index[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)     // 从右向左找第一个小于k的数
            {
                j--;
            }
 
            if(i < j)
            {
                arr[i] = arr[j];
                index[i++]=index[j];
            }
 
            while(i < j && arr[i] < k)      // 从左向右找第一个大于等于k的数
            {
                i++;
            }
 
            if(i < j)
            {
                arr[j] = arr[i];
                index[j--]=index[i];
            }
        }
 
        arr[i] = k;
 		index[i] = l;
        // 递归调用
        QuickSort(arr,index, low, i - 1);     // 排序k左边
        QuickSort(arr,index, i + 1, high);    // 排序k右边
    }
}

void output_array(int arr[],int size){
	int i;
	printf("一维数组：[");
    for(i=0;i<size;i++)
    	printf("%d,",arr[i]);
    printf("\b]\n");
}

void output_biaryarray(int arr[N][M],int n,int m){
	int i,j;
	printf("二维数组：\n");
    for(i=0;i<n;i++){
    	printf("[");
    	for(j=0;j<m;j++)
    		printf("%d,",arr[i][j]);
    	printf("\b]\n");	
	}
}

void Sort(int *arr,int *index,int size){
	int i,j;
	for(i=0;i<size-1;i++)
		for(j=0;j<size-1-i;j++)
			if(arr[j]<arr[j+1]){
				
				arr[j]^=arr[j+1];
				arr[j+1]^=arr[j];
				arr[j]^=arr[j+i];
				
				index[j]^=index[j+1];
				index[j+1]^=index[j];
				index[j]^=index[j+i];
				
			}
			
}
