#include<stdio.h>
#define n 30
int main()
{
    int s[n];
    int m;
    int i = 1; 
        do {        
                                          
                scanf("%d", s + i);
                if (-1 == *(s + i))
                        break;
                i++;
        } while(1);
    scanf("%d",&m);
    s[0]=m;
    i = 0;
    do{
        printf("%d\n",s[i]);
        i++;
        // scanf("%d\n",s[i]);
         if (-1 == *(s + i))
         
                break;
                
        } while(1);
        
        return 0;
}