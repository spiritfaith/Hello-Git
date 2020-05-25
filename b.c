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
		printf("��%d�����\n",FullPermutationCount);
        int i;
        if (begin >= end)       // ��ֹ������Ӧ������������� 
        {
			output_array(source,end);
        }
        else                    // �Ӷ�Ӧ��begin��end֮�������ҵ�Ԫ�ط���begin��λ�� 
        {
                for (i = begin; i < end; i++)
                {
                        if (begin != i)
                        {
                            Swap(&source[begin], &source[i]);       // ����
                        }
                        	printf("�ݹ�ǰ(i=%d)��",i);
                        	output_array(source,end);

                        // �ݹ�����ʣ��Ĵ�begin+1��end��Ԫ��
                        FullPermutation(source, begin + 1, end);

                        if (begin != i)
                        {
                            Swap(&source[begin], &source[i]);       // ����ʱ��ԭ
                        }
                        printf("�ݹ��(i=%d)��",i);
                        	output_array(source,end);
                }
        }
        FullPermutationCount--;
        printf("��%d��������˳�\n",FullPermutationCount+1);
}

int main(){
	int arr[]={1,2,3};
	int len = 3;
	FullPermutation(arr,0,len);
} 
