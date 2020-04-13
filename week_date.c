#include <stdio.h>
// 输入星期几，输出对应的英文单词（小写字母）。
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 1)
        printf("monday");
    else if (a == 2)
        printf("tuesday");
    else if (a == 3)
        printf("wednesday");
    else if (a == 4)
        printf("thursday");
    else if (a == 5)
        printf("friday");
    else if (a == 6)
        printf("saturday");
    else if (a == 7)
        printf("sunday"); 
    return 0;
}