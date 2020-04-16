#include <stdio.h>
#define COURSE_N 8
int Average(int score[], int n);

int Average(int score[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + score[i];
    
    return sum / n;
}

int main()
{
    int score[COURSE_N], n;
    Average();
    return 0;
}