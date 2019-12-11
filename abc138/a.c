#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t a;
    char s[11];
    intmax_t ans = 0;

    scanf("%jd", &a);
    scanf("%s", s);

    if (a >= 3200)
        puts(s);
    else
        puts("red");

    return 0;
}
