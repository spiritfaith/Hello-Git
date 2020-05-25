#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 50

int get_depth(char *s) {
  int depth = 0, len_s = strlen(s);
  // your code - start
  int count;
  int i;
  for(i = 0;i<len_s;i++){
  	if(s[i]=='('){
  		count++;
  		depth=count>depth?count:depth;
	}else if(s[i]==')'){
		count--;
	}
  }
  // your code - end
  printf("%d\n", depth);
}

int main() {
  char s[MAX_LEN + 1];
  gets(s);
  get_depth(s);
  return 0;
}
