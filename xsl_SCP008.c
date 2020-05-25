#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Sort(char a[10][80]);

int main()
{
    char a[10][80];
    int i;
    for(i=0;i<10;i++)
    {
        gets(a[i]);
    }
    Sort(a);
    for(i=0;i<10;i++)
    {
        puts(a[i]);
    }
    return 0;
}

void Sort(char a[10][80])
{
    int i,j;
    char temp[80];
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(a[j],a[i])<0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
}