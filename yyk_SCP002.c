#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,counter=0,j,count=1;
    for(i=0; i<100; i++)
    {
        a[i]=1;
    }
    for(i=0; count<=99; i++)
    {
        counter += a[i%100];
        if(counter==5)
        {
            a[i%100]=0;
            counter=0;
            count++;
        }
    }
    for(i=0; i<100; i++)
    {
        if(a[i])
            printf("%d\n",i+1);
    }
    return (0);
}