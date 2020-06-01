#include <stdio.h>

int main()
{
    int n,m,p;
    int i,q;
    int sum=0;
    scanf("%d",&n);
    m = n;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(q=0;q<m;q++)
        {
            scanf("%d",&p);
            a[i][q] = p;
            if(i==q||i+q==n-1)
            {
                sum = sum+a[i][q]*a[i][q];
            }
        }
    }
    printf("%d\n",sum);  
}