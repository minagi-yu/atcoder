#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t M1, D1, M2, D2;

    scanf("%jd%jd", &M1, &D1);
    scanf("%jd%jd", &M2, &D2);

    if (D2 == 1)
        puts("1");
    else
        puts("0");

    return 0;
}
