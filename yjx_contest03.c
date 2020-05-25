#include <stdio.h>

int main()
{
    int a, b, s;
    typedef struct point {
        int x;
        int y;
    }POINT;
    // POINT p1, p2;
    typedef struct rect {
        POINT l_bt;
        POINT r_bt;
    }RECT;
    RECT rec1, rec2, rec0;
    scanf("%d %d %d %d", &rec1.l_bt.x, &rec1.l_bt.y, &rec1.r_bt.x, &rec1.r_bt.y);
    scanf("%d %d %d %d", &rec2.l_bt.x, &rec2.l_bt.y, &rec2.r_bt.x, &rec2.r_bt.y);
    if (rec1.r_bt.x <= rec2.l_bt.x || rec2.r_bt.x <= rec1.l_bt.x)
    {
        printf("0\n");
        return 0;
    }
    else
    {
        rec0.r_bt.x = rec1.r_bt.x;
        a = rec0.r_bt.x - rec0.l_bt.x;
        b = rec0.r_bt.y - rec0.l_bt.y;
        s = a * b;
        printf("%d\n", s);
    }
    return 0;
}