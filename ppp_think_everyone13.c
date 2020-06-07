#include <stdio.h>
int main()
{
    int i;
    printf("Please input a number\n");
    scanf("%d", &i);
    int squareofsum = (i * (i + 1) / 2) * (i * (i + 1) / 2);
    int sumofsquare = (1 + i) * (1 + i) * i / 4 + i * (i * i - 1) / 12;
    int result = squareofsum - sumofsquare;
    printf("the result of the difference between sumofsquare and squareofsum is %d", result);
}