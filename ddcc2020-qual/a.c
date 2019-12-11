#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t X, Y;
    intmax_t ans = 0;

    scanf("%jd%jd", &X, &Y);

    if (X == 1)
        ans += 300000;
    else if (X == 2)
        ans += 200000;
    else if (X == 3)
        ans += 100000;

    if (Y == 1)
        ans += 300000;
    else if (Y == 2)
        ans += 200000;
    else if (Y == 3)
        ans += 100000;

    if ((X == 1) && (Y == 1))
        ans += 400000;

    printf("%jd\n", ans);

    return 0;
}
