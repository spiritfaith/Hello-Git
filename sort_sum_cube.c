#include <stdio.h>
#include <string.h>
#define SIZE 21
#define SIZE0 100
/* 题干：输入若干个正整数，
按照每个数各位的立方和的大小对这些数进行排序后输出
输入：输入若干个正整数（不超过20个），以-1结束
输出：按照各位数字立方和的大小，由大到小输出这些数（各位数字立方和一样大的输出本身大者）
每个数的输出格式为"%d\n"
Input:1 3 2 1011 111 23 -1
Output:23 3 2 1011 111 1 */
void Swap(int arr0[]);
int Sum_cube(int arr1[]);
int Getnumber(int arr2[]);

int main()
{
    int arr[SIZE];
    int i = 0;
    memset(arr, 0, sizeof(int) * SIZE);
    for (i = 0; i < SIZE; i++) //for循环解决输入数据
    {
        int tmp;
        scanf("%d", &tmp);
        arr[i] = tmp;
        if (-1 == tmp)
        {
            break;
        }
    }
    Swap(arr);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void Swap(int arr0[]) // Swap函数解决交换位置
{
    Sum_cube(arr0);
}

int Sum_cube(int arr1[]) // Sum_cube函数解决计算各位数的三次方
// 获得每一位，然后求立方和
// 要想获得每一位，可以调用自定义函数Getnumber
{
    int a, b, c;
    int tmp;
    /*     for (i = 0; i < SIZE; i++)
    {
        a = arr1[i] % 10; // a是个位数
        tmp = arr1[i] / 10;
    } */
    Getnumber();
    return;
}

int Getnumber(int arr2[])//获得输入数据的每一位数字
/*注意这里有两个数组，arr2[]是用来存放我们输入的数据的（之前的arr[],arr0[],arr1[]也是如此），
而arr3[]是存放每个输入数据的每一个数字，然后后面我们好把他们取出来，求立方和，然后我们就可以去比较，然后交换位置了 */
{
    int x, y;
    for (y = 0; y < SIZE; y++)//这里的y是为了让我们下面那个循环中使用GetIntLength时，传给这个GetIntLength函数的是一个整数，而不是一个数组，仅此而已
    {
        for (x = 0; x < GetIntLength(arr2[y]); x++) // 那么，GetIntLength(arr2[y])现在就是1个整数，用来控制循环的结束，
        {
            int arr3[SIZE0];//它是存储每个输入数据每一位的数组
            int c;//为什么要定义c呢？因为我们现在需要把arr2[]里的每个数的每一位都要取出来存放在arr3[]里面，所以需要使用一个循环把每个数的每一位都抽出来存放在arr3[]里面
            memset(arr3, 0, sizeof(int) * SIZE0);
            for (c = 0; c < SIZE0; c++)//SIZE0为100
            {                    //我们使用了1个数组arr3[]来存储每个数的个位，百位，千位等
                arr3[c] = arr2[y]%10;//这里的arr3[c]就相当于是保存个位数的变量a
                arr3[c+1] = arr2[y];//同样这里的arr3[c+1]
            }FIXME:这里有个小bug，我不知道怎么把arr2[]中每个数据的每一位取出来之后存放在哪？
        }
    }
}

int GetIntLength(int z)
{
    int len = 1;
    if (z < 0)
        z = -z;
    for (; z / 10 > 0; z /= 10)
        ++len;
    return len;
}