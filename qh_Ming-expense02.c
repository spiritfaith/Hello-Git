#include <stdio.h>

float n[7];
int main()
{
    int i, count = 0;
    for (i = 0; i < 7; i++)
        scanf("%f", &n[i]);
    i = 0;
    for (; i < 7;)
    {
        while (n[i++] > 50)
        {
            count++;
            if (count >= 3)
            {
                printf("YES");
                goto end;
            }
        }
        count = 0;
    }
    printf("NO");
end:
    return 0;
}