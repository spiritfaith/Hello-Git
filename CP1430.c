#include <stdio.h>

#define SIZE 200
int n_m_sum_cubes(int n, int m){
    int i, j;
    int a[SIZE];
    if (n == -m) return 0;
    for (i=n; i <= m; i++){
        a[i] = i*i*i;
    }
}



int main()
{
    int n, m;
    int ret;
    scanf("%d%d", &n, &m);
    ret = n_m_sum_cubes(n, m);
    printf("%d\n", ret);
    return 0;
}