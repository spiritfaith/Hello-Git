#include <stdio.h>
#include <string.h>
#define SIZE 30

int main()
{
        int i = 0;
        int arr[SIZE] = { 0 };
        do {                            // 使用循环完成输入，并保存至数组arr
                scanf("%d", arr + i);
                if (-1 == *(arr + i))
                        break;
                i++;
        } while(1);
// 接下来我们来完成在最前面加一个数的任务
// 我们可以让arr数组中存入数据的对应下标先自增，然后我们再在0号位存入一个数
// 接下来再输出整个数组除了-1
        int b[SIZE + 1] = { 0 };
        for (i = 0; arr[i] != -1; i++)  // 我们将输入的数据复制给b数组，并且我们空出了b[0]
        {
                b[i + 1] = arr[i];
        }
        /* for (i = 0; b[i] != -1; i++) // 用来输出b数组中的-1之前的各个元素，调试专用
        {
                printf("%d\n", *(b + i));
        } */
        // 接下来，我们就需要输入一个数n，并将其存入b[0]
        scanf("%d", b);
        // 最后我们把b数组中-1之前的元素打印出来
        for (i = 0; 0 != b[i]; i++)
        {
                printf("%d\n", *(b + i));
        }
        return 0;
}