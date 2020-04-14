#include <stdio.h>
#define WEEK 7
#define LIMIT 50
/*输入7个浮点数（0-100的非负数），
表示小明一周每天的花销，输出小明是否有连续3天花销超过50元，
若没有输出"NO"，否则输出"YES"。*/
void judge(int a, float b[WEEK], int c);
// judge函数的功能就是判断expense是否连续三次超过50
void judge(int a, float b[WEEK], int c) //a就是x，数组b就是数组expen,c是flag
{
    for (a = 0; a < WEEK; a++)
    {
        if (c == 0 && b[a] > LIMIT && b[a + 1] > LIMIT && b[a + 2] > LIMIT)
        {
            printf("YES");
            ++c;
        }
    }
    if (0 == c)
    {
        printf("NO");
    }
}

int main()
{
    float expen[WEEK];
    int x, i;
    int flag = 0;/* flag是一个起标志作用的变量，让电脑输出"YES"或"NO"的标志 */
    float tmp;
    for (i = 0; i < WEEK; i++)
    {
        scanf("%f", &tmp);
        expen[i] = tmp;
    }
    judge(x, expen, flag);
    return 0;
}
//一下是之前的错误思路代码
    /* for (j = 0; j < WEEK; j++)
    {
        printf("%.2f\t", expen[j]);
    } */
    /* if (expen[x] > LIMIT && x >= 0 && x < 7)
    {    if (expen[x + 1] > LIMIT && expen[x + 2] > LIMIT)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
            printf("arrive here");
            exit(0);
        }
    }
    else
    {
        printf("NO");
        printf("arrive here");
        exit(1); 
    } */