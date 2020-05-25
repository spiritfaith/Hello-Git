#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][100];//10个字符串空间，每个最长限制为100个字节。
    char *p[10];//字符指针数组。
    int i,j;
    char *t;
     
    for(i = 0; i < 10; i ++)
    {
        scanf("%s",a[i]);//输入第i个字符串。
        t=a[i];
        for(j = i-1; j>=0; j--)//查找插入的位置。
            if(strcmp(p[j], t)<=0) break;//从小到大按字典序排序。
            else p[j+1]=p[j];//后移一位。
        p[j+1] = t;//插入。
    }
    //循环结束后，p中就是排序好的10个字符串。
    for(i = 0; i < 10; i ++)
    {
        printf("%s\n", p[i]);
    }//输出结果。
    return 0;
}