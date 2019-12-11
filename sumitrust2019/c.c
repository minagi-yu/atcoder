#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t X;
    intmax_t ans = 0;

    scanf("%jd", &X);

    X -= ((X % 100) / 5) * 105;

    if (X < 0) {
        puts("0");
        return 0;
    }

    if ((X % 100) > 0) 
        X -= 100 + (X % 100);

    if (X < 0) {
        puts("0");
        return 0;
    }

    puts("1");

    return 0;
}
