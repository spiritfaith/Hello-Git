#include<stdio.h>

void output_array(int arr[],int size){
	int i;
	for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
   	printf("\n");
}

void Swap(int *lhs, int *rhs)
{
        int t = *lhs;
        *lhs = *rhs;
        *rhs = t;
}

int FullPermutationCount = 0;

void FullPermutation(int source[], int begin, int end)
{
		FullPermutationCount++;
		printf("第%d层调用\n",FullPermutationCount);
        int i;
        if (begin >= end)       // 终止条件，应该输出最终序列 
        {
			output_array(source,end);
        }
        else                    // 从对应的begin和end之间依次找到元素放在begin的位置 
        {
                for (i = begin; i < end; i++)
                {
                        if (begin != i)
                        {
                            Swap(&source[begin], &source[i]);       // 交换
                        }
                        	printf("递归前(i=%d)：",i);
                        	output_array(source,end);

                        // 递归排列剩余的从begin+1到end的元素
                        FullPermutation(source, begin + 1, end);

                        if (begin != i)
                        {
                            Swap(&source[begin], &source[i]);       // 回溯时还原
                        }
                        printf("递归后(i=%d)：",i);
                        	output_array(source,end);
                }
        }
        FullPermutationCount--;
        printf("第%d层调用已退出\n",FullPermutationCount+1);
}

int main(){
	int arr[]={1,2,3};
	int len = 3;
	FullPermutation(arr,0,len);
} 
