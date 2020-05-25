#include<stdio.h>
#include<string.h>
#define SIZE 100
void inverse(char str[]);
int main()
{
    char s[SIZE];
    printf("Input a string:\n");
    gets(s);
    inverse(s);
    printf("Inversed results:\n");
    printf("%s\n",s[SIZE]);
    return 0;
}
void inverse(char str[])
{
    int i, j;
    char temp;
    for(i=0;str[i]!='\0' ;i++)
    {
        for(j=1;str[j]!='\0';j++)
        {
            temp = str[i];
            str[j] = str[i];
            str[j] = temp;
        }
    }
}