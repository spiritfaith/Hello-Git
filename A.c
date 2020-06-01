#include <stdio.h>

#define SIZE 50
int main()
{
    int a[SIZE];
    int i, j, tmp;
    i = 0;
    while (1)
    {
        scanf("%d", &tmp);
        if (-1 == tmp)
            break;
        else
        {
            a[i] = tmp;
            i++;
        }
    }
    
    
}