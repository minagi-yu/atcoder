#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, L;
    intmax_t ans = 0;

    scanf("%jd%jd", &N, &L);

    if (L >= 0) {
        for (intmax_t i = (L + 1); i < (N + L); i++) ans += i;
    } else {
        if ((N + L) > 0) {
            for (intmax_t i = L; i < (N + L); i++) ans += i;
        } else {
            for (intmax_t i = L; i < (N + L - 1); i++) ans += i;
        }
    }

    printf("%jd\n", ans);

    return 0;
}
