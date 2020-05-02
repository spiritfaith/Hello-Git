#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define True 1
#define False 0

int prime(int n)
{
	long k;
	k = sqrt((double)n) + 1;
	for (int j = 2; j <= k; j++)
	{
		if (n%j == 0)
		{
			return False;  //n能被j整除，不是素数，返回False
		}
	}
	return True;  //n是素数，返回True
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	for (int i = 3; i<n; i++)
		if (prime(i) && prime(i + 2))
			printf("%d %d\n", i, i + 2);
	system("pause");
	return 0;
}