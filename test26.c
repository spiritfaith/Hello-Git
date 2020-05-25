#include <stdio.h>
#define SIZE 31

int main()
{
        int arr[SIZE] = { 0 };
        int i = 0;
        do {                                    // 循环来输入数据，并非保存至数组arr
                scanf("%d", arr + i);
                if (-1 == *(arr + i)) //arr[i]
                        break;
                i++;
        } while(1);
        // 接下来，我们需要删除中间数
        // 若是奇数，删除中间数然后输出剩余的数；若是偶数，直接输出所有数
        for (i = 0; arr[i] != -1; i++);
        // printf("i = %d\n", i);
        int num = i;    // num即为arr数组保存数字的个数
        if (num % 2 == 1)       // 奇数情况
        {                       // remember：i=num-1，所以i/2对应的下标正好就是中间的那个数的下标，删去它即可
                // 如何删去呢？其实只需要打印的时候跳过即可
                // 如何跳过呢？将其置为0，当作一个标记，一会打印遇到它就跳过它即可
                arr[i / 2] = -100;
                for (i = 0; arr[i] != -1; i++)
                {
                        if (-100 == arr[i])               // 如果arr[i] == 0,我们就跳过它
                                i++;
                        printf("%d\n", arr[i]);
                }
        }
        else            // 如果为偶数个，直接打印全部
        {
                for (i = 0; arr[i] != -1; i++)
                {
                        printf("%d\n", arr[i]);
                }
        }
        return 0;
}