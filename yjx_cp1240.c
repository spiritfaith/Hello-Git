#include <stdio.h>
#include <string.h>
#define SIZE 70

void Inverse(char str[]);

void Inverse(char str[])        // 要想倒序字符串数组，最好先知道它有多长，0到n-2
{       //中间劈开，交换最后一个字符(不是\0)和第一个,
        int len, i, half_len;
        len = strlen(str);      //len不包括\0
        half_len = len / 2;
        char tmp;
        if (1 == half_len % 2)  // 如果字符个数是奇数，中间不动，两边交换
        {
                tmp = 0;
                for (i = 0; i < half_len; i++)
                {
                        if (half_len == i)
                                break;
                        tmp = str[i];
                        str[i] = str[len - i - 1];
                        str[len - i - 1] = tmp;
                }
        }
        else
        {               // 如果字符个数是偶数,前后交换即可
                for (i = 0; i < half_len; i++)
                {
                        tmp = 0;
                        tmp = str[i];
                        str[i] = str[len - i - 1];
                        str[len - i - 1] = tmp;
                }
        }
}

int main(int argc, char *argv[])
{
        char Str[SIZE];
        printf("Input a string:\n");
        gets(Str);
        Inverse(Str);
        printf("Inversed results:\n");
        printf("%s\n", Str);
        return 0;
}