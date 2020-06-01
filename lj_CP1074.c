#include<stdio.h>
int main()
{
    int num[20][20];
    int i,j,n,s=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
            if(j==i||j==n-1-i)
                s += num[i][j]*num[i][j];
		}
	}
    printf("%d\n",s);
    return 0;
}