#include <stdio.h>

void insertSort(int r[], int len){
    int i, k, tmp;
    for(i = 1; i < len; i++){
        k = i - 1;
        tmp = r[i];
        while(k >= 0 && r[k] > tmp)
        {
            r[k + 1] = r[k];
            k--;
        }
        r[k + 1] = tmp;
    } 
}
void main(){
    int count = 0, end = 0, s;
    int r[4];
    int max, min;
    scanf("%d", &s);
    while(1){
        if(end == 6174){
            printf("Succeed!\n");
            break;
        }
        r[0] = s % 10;
        r[1] = s / 10 % 10;
        r[2] = s / 100 % 10;
        r[3] = s / 1000 % 10;
        insertSort(r, 4);
        max = 1000 * r[3] + 100 * r[2] + 10 * r[1] + r[0];
        min = 1000 * r[0] + 100 * r[1] + 10 * r[2] + r[3];
        end = max - min;
        count++;
        printf("NO.%d: %d - %d = %d\n", count, max, min, end);        
        s = end;
    }
}