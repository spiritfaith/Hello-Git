#include <stdio.h>
#include <math.h>

int main()
{       // the first exp
        struct point {
                int x;
                int y;
        };
        struct point pt = { 2, 2 };
        struct point maxpt = { 320, 200 };
        double dist;
        dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
        printf("%d,%d\n", pt.x, pt.y);
        printf("%lf\n", dist);

        /* struct rect {
                struct point pt2;
                struct point pt1 = { 1, 1 };// c语言中不能嵌套定义，但可以嵌套调用，这里估计是这个原因
        }; */
        // the second exp
        struct rect {
                struct point pt1;
        };
        struct rect screen;
        screen.pt1.x = 1;
        screen.pt1.y = 1;
        printf("%d,%d\n", screen.pt1.x, screen.pt1.y);
        // printf("%d,%d\n", screen.pt2.x, screen.pt2.y);
        return 0;
}