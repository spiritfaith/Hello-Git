#include <stdio.h>
#include <math.h>

int GetIntLength(int i);

int main()
{
   int n, b, k;          //n为输入的数,b为不做交换的位，k是一共的位数
   int i, j, tmp = 0, a; //i是最高位，j是最低位，tmp为交换位时的中间变量,a是最终输出结果
   scanf(" %d", &n);     //输入n
   //检查n的位数不能用sizeof
   k = GetIntLength(n);                           //调用GetIntLength计算出n的长度
   i = n / (int)pow((double)10, (double)(k - 1)); //计算出n的最高位
   j = n % 10;                                    //得到n的最低位
   b = n - i * (int)pow((double)10, (double)(k - 1)) - j * 1;
   tmp = i; //将i的值赋给中间变量
   i = j;   // 将j的值赋值给i
   j = tmp; //将中间变量的值赋值给j

   a = i * (int)pow((double)10, (double)(k - 1)) + j * 1 + b;
   printf("%d\n", a);
   return 0;
}

int GetIntLength(int i)
{
   int len = 1;
   if (i < 0)
      i = -i;
   for (; i / 10 > 0; i /= 10)
      ++len;
   return len;
}