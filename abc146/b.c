#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N;
    char S[(int)1e4];
    char *s;

    scanf("%jd", &N);
    scanf("%s", S);

    s = S;
    do {
        *s += N;
        if (*s > 'Z')
            *s -= 'Z' - 'A';
    } while (*++s);

    puts(S);

    return 0;
}
