#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t P, Q, R;
    intmax_t ans = 0;

    scanf("%jd%jd%jd", &P, &Q, &R);

    ans += P + Q + R;
    ans -= P < Q ? ((Q < R) ? R : Q) : ((P < R) ? R : P);

    printf("%jd\n", ans);
}
