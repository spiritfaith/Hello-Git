#include <stdio.h>
#define MAXDIGIT 1000
int main()
{
    int n;
    int a[MAXDIGIT];     
    int digit = 1;   //已有位数
    int temp;
    int i, j, carry; //carry：进位

    scanf("%d", &n);
    a[0] = 1;

    for (i = 2; i <= n; i++)
    {
        for (j = 1, carry = 0; j <= digit; j++)
        {
            temp = a[j - 1] * i + carry; //相应阶乘中的一项与当前所得临时结果的某位相乘（加上进位）
            a[j - 1] = temp % 10;        //更新临时结果的位上信息
            carry = temp / 10;           //看是否有进位
        }
        while (carry)
        {                                //如果有进位
            a[digit++] = carry % 10;     //新加一位，添加信息。位数增1
            carry = carry / 10;          //看还能不能进位
        }
    }
    do
    {
        for (int k = 0; k < 12; k++)
        {
            printf("%d", a[j--]);
            if (j < 0)
                break;
        }
        printf("\n");
    } while (j > 0);
    return 0;
}