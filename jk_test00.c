#include<stdio.h>
int main()
{
	int alx, arx, blx, brx, aly, ary, bly, bry; 
	int lmaxx, rminx, bmaxy, tminy;
	int l, h, s;
	scanf("%d%d%d%d\n",&alx,&aly,&arx,&ary);
	scanf("%d%d%d%d\n",&blx,&bly,&brx,&bry);
	if(alx>blx)
	lmaxx=alx;
	else
	lmaxx=blx;
	if(arx<brx)
	rminx=arx;
	else
	rminx=brx;
	if(aly>bly)
	bmaxy=aly;
	else
	bmaxy=bly;
	if(ary<bry)
	tminy=ary;
	else
	tminy=bry;
	l = rminx-lmaxx;
	h = tminy-bmaxy;
	if(l<=0||h<=0)
	printf("%d",s);
	else
	{
	s = l * h;
	printf("%d",s);
    }
    return 0;
}
