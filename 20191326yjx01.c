#include<stdio.h>
int main(){
    int a, n, p;//定义变量a,n,p
    int ret = 1;//定义变量ret并将其初始化为1
    scanf("%d %d %d", &a, &n, &p);//输入a,n,p三个数的值
    while (n)
    {
        if (n % 2 == 1)
        {
            ret = ret * a % p;
        }
        n = n / 2;
        a = a * a % p;
    }
    printf("ret : %d\n", ret);
    return 0;
}