#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t X, A;
    intmax_t ans = 0;

    scanf("%jd%jd", &X, &A);

    if (X < A) {
        puts("0");
    } else {
        puts("10");
    }

    return 0;
}
