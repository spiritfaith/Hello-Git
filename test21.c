#include <stdio.h>
#include <math.h>
#define True 1
#define False 0

int prime(int n);

int main()
{
    int n, m;
    int count = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m] = {0};
    for (int i = 0; i < m; i++) // 将输入数据存入数组arr
    {
        scanf("%d", arr + i);
    }
    for (i = 0; i < n; i++) //控制行数
    {
        for (int j = 0; j < m; j++) //控制列数
        {
            if (prime(arr[i][j])) // 如果是素数，我们就输出它的行数和列数还需要判断哪行多
            {
                printf("%d %d", i, j);
                count++;
                // 将每行记录的次数存到一个数组里
                int tmp = 0； // tmp变量用来作为arr01的index
                    int arr01[100] = {0};
                arr01[tmp] = count; // 我们将每行记录的素数个数存入arr01中
            }
        }
        tmp++;     // tmp自增来保证每行存入的数据都占有arr01的不同位置
        count = 0; // 每行计数完成后，将count重新置为0，便于计数下一行的素数
    }

    // 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然z函数还是拿来比较的
    i = 0;
    i = compare(arr01);
    return 0;
}

int prime(int n)
{
	long k;
	k = sqrt((double)n) + 1;
	for (int j = 2; j <= k; j++)
	{
		if (n%j == 0)
		{
			return False;  //n能被j整除，不是素数，返回False
		}
	}
	return True;  //n是素数，返回True
}

// 调用函数来比较arr01数组中不同行记录的素数个数，谁的最大，就输出它；一样大，就都输出.当然z函数还是拿来比较的          
void compare(int a[])                                                                                                   
{                                                                                                                               
    if ( 