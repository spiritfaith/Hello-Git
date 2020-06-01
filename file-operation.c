#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main(void)
{
    long L;
    float fp;
    char s[81];
    char c;

    stream = fopen("fscanf.out", "w+");
    if (stream == NULL)
    {
        printf("file open error");
        exit(1);
    }
    else
    {
        fprintf(stream, "%s\t%ld\t%f\t%c", "a-string", 65000, 3.14159, 'x');
        fseek(stream, 0L, SEEK_SET);
        // Remember the space preceding %c!!!
        fscanf(stream, "%s%ld%f %c", s, &L, &fp, &c);

        printf("%s\n%ld\n%f\n%c", s, L, fp, c);
    }
}