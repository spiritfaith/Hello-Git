#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int find_digit(int num); //返回阶乘结果的位数
void factorial(int *fact, int digit, int num);
void process_carry(int *fact, int pos);
void output(int *fact, int digit);

int main(void)
{
	int num, digit;
	int *fact = NULL;

	scanf("%d", &num); //输入求阶乘的数:num!
	digit = find_digit(num);
	(fact = (int *)calloc(digit, sizeof(int))); //动态分配并初始化为0
	factorial(fact, digit, num);
	output(fact, digit);
	free(fact);
	fact = NULL;
	return 0;
}
int find_digit(int num)
{
	double digit_f = 0;
	for (int i = 1; i <= num; i++)
	{
		digit_f += log10(i);
	}
	return (int)digit_f + 1;
}
void factorial(int *fact, int digit, int num)
{
	int pos;
	fact[0] = 1;
	for (int i = 2; i <= num; i++)
	{
		pos = digit - 1;
		for (int j = 0; j <= pos; j++)
		{
			fact[j] *= i;
		}
		process_carry(fact, pos);
	}
}

void process_carry(int *fact, int pos)
{
	int carry = 0;
	for (int i = 0; i <= pos; i++)
	{
		fact[i] += carry;
		if (fact[i] <= 9)
		{
			carry = 0;
		}
		if (fact[i] > 9 && i < pos)
		{
			carry = fact[i] / 10;
			fact[i] %= 10;
		}
	}
}
void output(int *fact, int digit)
{
	int m = 0;
	int pos = digit - 1;
	for (int i = pos; i >= 0; i--)
	{
		printf("%d", fact[i]);
		if (++m % 12 == 0) //每12个数字凑一组
		{
			printf("\n");
		}
	}
}
