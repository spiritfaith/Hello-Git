#include <stdio.h>

#define SIZE 30
#define ASIZE 200

int gcd(int a, int b)
{
	if (b != 0)
		return gcd(b, a % b);
	else if (b == 0)
		return a;
	return 0;
}



int main(void)
{
	int a[SIZE] = {0};
	int tmp, n, ret[ASIZE] = {0};
	int i = 0, j = 0;
	while (1)				// 循环完成输入
	{
		scanf("%d", &tmp);
		if (-1 == tmp)
			break;
		a[i] = tmp;
		i++;
	}
	tmp = i;
	// printf("%d\n", tmp);

	int flag = -1;
	for (i = 0; i < tmp; i++)		// 循环完成最大公约数的判断，并存入数组
	{
		for (j = i + 1; j < tmp; j++)
		{
			++flag;
			ret[flag] = gcd(a[i], a[j]);
		}
	}
	// printf("%d\n", flag);
	// 接下来将数组ret里的元素相加即可
	int result = 0;
	for (i = 0; i <= flag; i++)
	{
		result += ret[i]; 
	}
	printf("%d\n", result);
	return 0;
}
