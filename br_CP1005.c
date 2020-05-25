#include<stdio.h>
#include<math.h>
int judge(int x) {			//判断素数
	if (x < 2)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return 0;
	return 1;
}
int main() {
	int s, left, right, flag = 0;
	int count = 0;		//记录个数
	int result[2];		//记录结果
	printf("Input num:");
	scanf("%d", &s);
	left = right = s;
	while (flag == 0) {
		if (left>0&&judge(--left)) {		//左边小于0时就不用再判断素数了
			result[count++] = left;
			flag = 1;
 
		}
		if (judge(++right)) {
			result[count++] = right;
			flag = 1;
		}
	}
	if (count == 1)
		printf("Prime number is %d", result[0]);
	else
		printf("Prime number are %d,%d", result[0], result[1]);
	return 0;
}