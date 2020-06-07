#include<stdio.h>
int main()
{
	int a, b, c, d;
	float t, n;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	t = (a*c+b*d)*1.0/(d*d+c*c);
	n = (b*c-a*d)*1.0/(d*d+c*c);
	printf("%.2f %.2f",t,n);
	return 0;
}