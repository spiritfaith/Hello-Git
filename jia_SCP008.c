#include <stdio.h>

#define SIZE 10

void Input(char str[][80], int n);
void Sort(char str[][80], int n);
void Print(char str[][80], int n);

void Input(char str[][80], int n)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        str[i] = getchar();
    }
}

void Sort(char str[][80], int n)
{
}

int main()
{
    char s[SIZE][80];
    Input(s, SIZE);
    Sort(s, SIZE);
    Print(s, SIZE);
    return 0;
}