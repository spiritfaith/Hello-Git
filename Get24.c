#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 4
#define MAX_LEN 200
enum occupied { no, yes };
typedef enum occupied Occupied;
struct info {
  float n[N];
  char s[N][MAX_LEN + 1];
  Occupied flag[N];
};
typedef struct info Info;
int global_flag = 0;

int get_24(Info* x) {
  int i, j, counter = 0, k;
  for (i = 0; i < N; i++)
    if (x->flag[i]) {
      counter++;
      k = i;
    }
  if (counter == 1) {
    // printf("%f\n", x->n[k]);
    if (fabs(x->n[k] - 24) < 0.01) {
      printf("%s", x->s[k]);
      global_flag = 1;
      return 1;
    } else
      return 0;
  }

  for (i = 0; i < N; i++)
    for (j = i + 1; j < N; j++)
      if (x->flag[i] && x->flag[j]) {
        float n_i = x->n[i], n_j = x->n[j];

        char s_i[MAX_LEN + 1], s_j[MAX_LEN + 1];
        char s_t[MAX_LEN + 1];
        strcpy(s_i, x->s[i]);
        strcpy(s_j, x->s[j]);
        // printf("x->s[i]: %s\n", x->s[i]);
        // printf("x->s[j]: %s\n", x->s[j]);
        // getchar();

        char* s = "+-*/";
        for (k = 0; k < 4; k++) {
          int y, z;
          int flag_break = 0;
          for (y = 0; y < 2; y++) {
            s_t[0] = s[k];
            s_t[1] = '\0';
            switch (s[k]) {
              case '+':
                x->n[i] = n_i + n_j;
                break;
              case '-':
                x->n[i] = y == 0 ? n_i - n_j : n_j - n_i;
                break;
              case '*':
                x->n[i] = n_i * n_j;
                break;
              case '/':
                z = y == 0 ? fabs(n_j) < 0.01 : fabs(n_i) < 0.01;
                if (z) {
                  flag_break = 1;
                  break;
                }
                x->n[i] = y == 0 ? n_i * 1.0 / n_j : n_j * 1.0 / n_i;
                break;
              default:
                break;
            }
            if (flag_break) break;
            if (y == 0) {
              strcat(strcat(x->s[i], s_t), x->s[j]);
            } else {
              strcat(strcat(x->s[j], s_t), x->s[i]);
              strcpy(x->s[i], x->s[j]);
            }
            // printf("cat: %s\n", x->s[i]);

            s_t[0] = '(';
            strcpy(s_t + 1, x->s[i]);
            int s_t_len = strlen(s_t);
            s_t[s_t_len] = ')';
            s_t[s_t_len + 1] = '\0';
            // printf("%s\n", s_t);
            // printf("x->s[i]: %s\n", x->s[i]);
            // getchar();
            strcpy(x->s[i], s_t);
            x->flag[i] = yes;
            x->flag[j] = no;

            if (get_24(x))
              return 1;
            else {
              // restore info before
              x->flag[i] = yes;
              x->flag[j] = yes;
              x->n[i] = n_i;
              x->n[j] = n_j;
              strcpy(x->s[i], s_i);
              strcpy(x->s[j], s_j);
            }
          }
        }
      }
  return 0;
}
int main() {
  Info* x = (Info*)malloc(sizeof(Info));
  int k;
  char s[MAX_LEN + 1];
  for (k = 0; k < N; k++) {
    int u;
    scanf("%d", &u);
    x->n[k] = u;
    x->flag[k] = yes;
    itoa(u, s, 10);
    strcpy(x->s[k], s);
    printf("%s ", x->s[k]);
  }
  printf("\n");
  // exit(1);
  get_24(x);
  if (!global_flag) printf("cannot get 24");
}
