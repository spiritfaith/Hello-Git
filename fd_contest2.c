#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

void count_substring(char s[][MAX_LEN + 1], int n);
void generate_substring(char s[][MAX_LEN + 1],int start,int end,int *count);

void generate_substring(char s[][MAX_LEN + 1],int start,int end,int *count){
	if(start>=end){
		if(strstr(s[0],s[1])!=NULL)
			(*count)++;
//		printf("%d %d %d %d %s\n",start,end,count,*count,s[1]); 
		return ;
	}
	else{
		int i;
		for(i=start;i<end;i++){
			if(s[1][i]=='?'){
				s[1][i]='0';
				generate_substring(s,i+1,end,count);
				s[1][i]='1';
				generate_substring(s,i+1,end,count);
				s[1][i]='?';
				return ;
			}else
				i++;
		}
		generate_substring(s,i,end,count);
	}
}

void count_substring(char s[][MAX_LEN + 1], int n) {
  int len_a = strlen(s[0]), len_b = strlen(s[1]);
//  char buffer[50][MAX_LEN + 1];
  int number = 0;
  // your code - start
  generate_substring(s,0,len_b,&number);
  // your code - end
  printf("%d\n", number);
}

int main() {
  char a_b[2][MAX_LEN + 1];
  int n = 0;
  gets(a_b[0]);
  gets(a_b[1]);

  count_substring(a_b, 2);
  return 0;
}