    #include <stdio.h>
    int main()
    {  
         int b[3][3]={0,1,2,0,1,2,0,1,2},i,j,t=0;
         for(i=0;i<3;i++)
             for(j=i;j<=i;j++) 
               {
                    t=t+b[i][b[j][j]];
                    printf("%d\n",t);
               }
         return 0;
    }