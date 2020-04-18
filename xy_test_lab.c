void fractionToDecimal(int numerator, int denominator)
{
    // your code
    char result[100], sign = '+';
    int i = 0, j = 1, k = 100, l = 0, num, N[100], q = 0, p = 0;
    //符号
    if (numerator < 0)
    {
        numerator = -numerator;
        sign = '-';
    }
    //开始计算
    num = numerator / denominator;
    //整数部分
    while (k != 0)
    {
        if (num / k != 0 && j == 1 || j == 0)
        {
            result[i++] = '0' + num / k;
            l++;
            j = 0;
        }
        num = num - num / k * k;
        k /= 10;
    }
    //添加小数点
    if(l == 0){
        result[0] = '0';
        i++;
    }
    if(numerator % denominator != 0){
        result[i++] = '.';
    }
    //小数部分计算
    N[j] = numerator % denominator;
    while (p != -1)
    {
        result[i++] = N[j] * 10 / denominator + '0';
        N[j + 1] = N[j] * 10 % denominator;
        //不循环的小数
        if (N[j] == 0)
        {   
            result[i-1] = '\000';
            break;
        }
        j++;
        //循环的小数
        for (q = 0; q < j; q++)
        {
            if (N[q] == N[j])
            {
                p = -1;
                break;
            }
        }
    }
    //结束计算，输出结果
    result[i++] = '\000';
    if (sign == '-')
        printf("-");
    if (p != -1)
    {
        printf("%s", result);
    }
    else if (p == -1)
    {
        for (num = 0; num < i; num++)
        {
            if (num == l + q + 1)
            {
                printf("(");
            }
            if (result[num] != '\000')
            {
                printf("%c", result[num]);
            }
        }
        printf(")");
    }
    printf("\n");
}