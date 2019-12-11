#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t A;
    intmax_t sum = 0;

    for (size_t i = 0; i < 3; i++) {
        scanf("%jd", &A);
        sum += A;
    }

    if (sum >= 22)
        puts("bust");
    else
        puts("win");

    return 0;
}
