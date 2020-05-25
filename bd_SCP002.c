#include <stdio.h>
int main()
{
    int m[101]={ 0 };  //不使用m[0]
    int i, j;
    i=0;
    j=1;
    while (i<=5*99)
    {
        if (m[j]==0) //没领过馒头的报数
        {
            ++i;   //报数
            if (i%5==0)  //第五个
                m[j]=1;  //领馒头
        }
        ++j; //数人
        if (j==101)  //数到zhidao100从头来
            j=1;
    }
    for (i=1; i<=100; ++i)
    {
        if (m[i]==0)
            printf("%d\n", i);
    }
    return 0;
}