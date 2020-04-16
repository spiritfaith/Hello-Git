//第二题也直接改他的代码，我改了几次才对的
#include <stdio.h>
#include <string.h>
void process_shift(void)
{
    char s[1001];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    int a[100];
    int k;
    k = 0;
    while (s[k] != '\0')
        k++;

    int len = k;
    for (k = 0; k < n; k++)
        scanf("%d", &a[k]);
    //到这数据就输入好了，s是一个字符数组，也就是被操作的那个数，n是移动的次数，a是一个整数数组，里面是每一次移动的位数(含正负)，len就是字符串长度
    // your code - start
    char rlt[1001];//定义一个一样长的数组作为结果，全部初始化为'\0'这样在最后输出的时候免得出错，我也不知道是不是必要的(QAQ)
    // memset(rlt, 0, sizeof(rlt));
    int sum = 0, i1;//定义一个sum其实把字符串循环移动就相当于改变字符串开始的位置，把所有移动的位数加起来相当于把开始的位置改成这个sum%len
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        sum %= len;//题里说cyclic_shift[k]的值在-10^9和10^9之间，所以可能sum会很大，有可能超出int的最大表数范围，所以每加一次都对len取整，亲测不取整要pac
    }
    int i2 = sum % len;//i2就新字符串开始的下标
    i2 = i2 < 0 ? i2 + len : i2;//如果i2为负，则加一个len化成正的，不然会pac
    for (i1 = 0; i1 < len; i1++)//从零开始增加，一个个弄到rlt里面去，不管超没超过len都区域，但实际超过了len了才会被取余，相当于循环了
    {
        rlt[i1] = s[i2++];
        i2 %= len;
    }
    printf("%s", rlt);
    // your code - end
}

int main()
{
    process_shift();
    return 0;
}